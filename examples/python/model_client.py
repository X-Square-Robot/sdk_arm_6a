#!/usr/bin/env python3
"""Connect a 6-axis arm to a Wall-X model server and execute end-pose actions.

Lives in open_arm_sdk. The model address is a WebSocket ``ip:port``. The arm
itself is local ROS 2 (CAN / ``ros2 launch``), same as the other examples here.

Run inside the arm container, after ``test_single_arm.launch.py`` is up::

    source /opt/xr/core/install/setup.bash
    cd ~/workspace/examples/python
    python3 model_client.py --model-address 39.101.65.229 --port 44445 \\
        --instruction "Pick up the blue cup."

``--dry-run`` connects and prints one prediction without moving the arm.
"""

from __future__ import annotations

import argparse
import asyncio
import base64
import signal
import sys
import threading
import time
from pathlib import Path

import numpy as np

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rclpy
from controller_manager import ControllerSwitcherService
from geometry_msgs.msg import Point, Pose, PoseStamped, Quaternion
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import CompressedImage, Image, JointState
from std_msgs.msg import Float64MultiArray


def _require_cv2():
    try:
        import cv2
    except ImportError as exc:
        raise SystemExit("pip install opencv-python-headless") from exc
    return cv2


def _require_websockets():
    try:
        import websockets
    except ImportError as exc:
        raise SystemExit("pip install websockets") from exc
    return websockets


def _require_msgpack():
    try:
        import msgpack
        import msgpack_numpy

        msgpack_numpy.patch()
    except ImportError as exc:
        raise SystemExit("pip install msgpack-numpy") from exc
    return msgpack


def _rot6d_to_matrix(rot6d: np.ndarray) -> np.ndarray:
    """First two rows of a rotation matrix -> 3x3. Matches wall-x ``so3_to_matrix``."""
    raw = np.asarray(rot6d, dtype=np.float64).reshape(-1)
    row1 = raw[:3].copy()
    row2 = raw[3:6].copy()
    row1 /= np.linalg.norm(row1) + 1e-12
    row2 -= np.dot(row1, row2) * row1
    row2 /= np.linalg.norm(row2) + 1e-12
    row3 = np.cross(row1, row2)
    return np.stack([row1, row2, row3], axis=0)


def relative_chunk_to_follow_pos(
    predict_action: np.ndarray, state7: np.ndarray
) -> list[list[float]]:
    """Lift a relative ``predict_action`` chunk to absolute ``follow2_pos`` rows.

    Layout of the first 10 dims: position delta (3), relative 6D rotation (6),
    absolute gripper (1). ``R_abs = R_delta @ R_state``.
    """
    from scipy.spatial.transform import Rotation

    chunk = np.asarray(predict_action, dtype=np.float64)
    if chunk.ndim == 3:
        chunk = chunk[0]
    if chunk.ndim != 2 or chunk.shape[1] < 10:
        raise ValueError(f"predict_action must be [H, >=10], got {chunk.shape}")

    state7 = np.asarray(state7, dtype=np.float64).reshape(-1)
    pos = state7[:3]
    euler = state7[3:6]
    state_rot = Rotation.from_euler("xyz", euler).as_matrix()

    rows: list[list[float]] = []
    for step in chunk:
        abs_pos = pos + step[:3]
        abs_rot = _rot6d_to_matrix(step[3:9]) @ state_rot
        abs_euler = Rotation.from_matrix(abs_rot).as_euler("xyz")
        gripper = float(np.clip(step[9], 0.0, 4.5))
        rows.append(
            [
                float(abs_pos[0]),
                float(abs_pos[1]),
                float(abs_pos[2]),
                float(abs_euler[0]),
                float(abs_euler[1]),
                float(abs_euler[2]),
                gripper,
            ]
        )
    return rows


def _as_action_rows(value) -> np.ndarray | None:
    if value is None:
        return None
    arr = np.asarray(value, dtype=np.float64)
    if arr.ndim == 1:
        arr = arr.reshape(1, -1)
    if arr.ndim != 2 or arr.shape[1] < 7:
        return None
    return arr


class ArmInterface(Node):
    """Read wrist pose / gripper / camera, publish cartesian and gripper commands."""

    def __init__(self, camera_topic: str, raw_camera_topic: str) -> None:
        super().__init__("arm_model_client")
        self._pose = None
        self._gripper = None
        self._image_b64 = None
        self._joint_names: list[str] = []
        self._image_decode_failed = False
        self._raw_decode_failed = False
        self._lock = threading.Lock()
        # joint_state / end-pose broadcasters publish sensor-data QoS (best effort).
        # A reliable subscription is incompatible and never receives those messages.
        self.create_subscription(
            JointState, "/joint_states", self._on_joints, qos_profile_sensor_data
        )
        self.create_subscription(
            PoseStamped, "/arm/end_pose", self._on_pose, qos_profile_sensor_data
        )
        self.create_subscription(
            CompressedImage, camera_topic, self._on_image, qos_profile_sensor_data
        )
        # usb_cam publishes the raw frame here. The compressed name can appear in
        # ``ros2 topic list`` just because this node subscribed, with no frames.
        self.create_subscription(
            Image, raw_camera_topic, self._on_raw_image, qos_profile_sensor_data
        )
        self._pose_pub = self.create_publisher(
            PoseStamped, "/cart_pose_controller/pose_cmd", 10
        )
        self._grip_pub = self.create_publisher(
            Float64MultiArray, "/gripper_controller/commands", 10
        )

    def _on_joints(self, msg: JointState) -> None:
        with self._lock:
            self._joint_names = list(msg.name)
        for name, position in zip(msg.name, msg.position):
            if "gripper" in name and "left" not in name and "right" not in name:
                with self._lock:
                    self._gripper = float(position)
                return

    def _on_pose(self, msg: PoseStamped) -> None:
        with self._lock:
            self._pose = msg

    def _on_image(self, msg: CompressedImage) -> None:
        cv2 = _require_cv2()
        raw = np.frombuffer(msg.data, dtype=np.uint8)
        image = cv2.imdecode(raw, cv2.IMREAD_COLOR)
        if image is None:
            if not self._image_decode_failed:
                self.get_logger().error(
                    "wrist camera frame is not a JPEG this client can decode"
                )
                self._image_decode_failed = True
            return
        ok, encoded = cv2.imencode(
            ".jpg", image, [int(cv2.IMWRITE_JPEG_QUALITY), 95]
        )
        if not ok:
            return
        payload = base64.b64encode(encoded.tobytes()).decode("ascii")
        with self._lock:
            self._image_b64 = payload

    def _on_raw_image(self, msg: Image) -> None:
        cv2 = _require_cv2()
        frame = np.frombuffer(msg.data, dtype=np.uint8)
        if msg.encoding == "rgb8":
            image = cv2.cvtColor(
                frame.reshape(msg.height, msg.width, 3), cv2.COLOR_RGB2BGR
            )
        elif msg.encoding == "bgr8":
            image = frame.reshape(msg.height, msg.width, 3)
        elif msg.encoding == "mono8":
            image = frame.reshape(msg.height, msg.width)
        else:
            if not self._raw_decode_failed:
                self.get_logger().error(
                    f"unsupported raw camera encoding: {msg.encoding}"
                )
                self._raw_decode_failed = True
            return
        ok, encoded = cv2.imencode(
            ".jpg", image, [int(cv2.IMWRITE_JPEG_QUALITY), 95]
        )
        if not ok:
            return
        payload = base64.b64encode(encoded.tobytes()).decode("ascii")
        with self._lock:
            self._image_b64 = payload

    def follow2_pos(self) -> list[float] | None:
        from scipy.spatial.transform import Rotation

        with self._lock:
            pose = self._pose
            gripper = self._gripper
        if pose is None or gripper is None:
            return None
        position = pose.pose.position
        quat = pose.pose.orientation
        euler = Rotation.from_quat(
            [quat.x, quat.y, quat.z, quat.w]
        ).as_euler("xyz")
        return [
            float(position.x),
            float(position.y),
            float(position.z),
            float(euler[0]),
            float(euler[1]),
            float(euler[2]),
            float(gripper),
        ]

    def image_b64(self) -> str | None:
        with self._lock:
            return self._image_b64

    def missing_inputs(self, camera_topic: str) -> list[str]:
        missing = []
        with self._lock:
            if self._pose is None:
                missing.append("/arm/end_pose")
            if self._gripper is None:
                if self._joint_names:
                    missing.append(
                        "gripper joint in /joint_states (saw: "
                        + ", ".join(self._joint_names)
                        + ")"
                    )
                else:
                    missing.append("/joint_states")
            if self._image_b64 is None:
                missing.append(camera_topic + " or /eye_in_hand/eye_in_hand/image_raw")
        return missing

    def publish_follow_row(self, row: list[float]) -> None:
        from scipy.spatial.transform import Rotation

        if len(row) != 7:
            self.get_logger().error(
                "refuse pose command with dim %s; SDK expects xyz+euler+gripper (7)",
                len(row),
            )
            return
        quat = Rotation.from_euler("xyz", row[3:6]).as_quat()
        pose = PoseStamped()
        pose.header.frame_id = "world"
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.pose = Pose(
            position=Point(x=float(row[0]), y=float(row[1]), z=float(row[2])),
            orientation=Quaternion(
                x=float(quat[0]),
                y=float(quat[1]),
                z=float(quat[2]),
                w=float(quat[3]),
            ),
        )
        self._pose_pub.publish(pose)
        grip = Float64MultiArray()
        grip.data = [float(np.clip(row[6], 0.0, 4.5))]
        self._grip_pub.publish(grip)


def _actions_from_response(result: dict, state7: list[float]) -> list[list[float]]:
    follow = _as_action_rows(result.get("follow2_pos"))
    if follow is not None:
        # Same as ex001_client_rtc_async: use the full follow2_pos trajectory.
        if follow.shape[1] != 7:
            raise ValueError(f"follow2_pos width {follow.shape[1]} != 7")
        return follow.tolist()
    if "predict_action" not in result:
        keys = ", ".join(sorted(result.keys()))
        raise KeyError(f"model response has neither follow2_pos nor predict_action ({keys})")
    return relative_chunk_to_follow_pos(result["predict_action"], np.asarray(state7))


def _interpolate_follow_rows(rows: list[list[float]], multiplier: int) -> list[list[float]]:
    """Expand model steps to control steps. Position and gripper are linear, rotation is slerp."""
    if multiplier <= 1 or len(rows) <= 1:
        return [[float(v) for v in row] for row in rows]
    from scipy.spatial.transform import Rotation, Slerp

    dense: list[list[float]] = []
    for start, end in zip(rows, rows[1:]):
        start_arr = np.asarray(start, dtype=np.float64)
        end_arr = np.asarray(end, dtype=np.float64)
        slerp = Slerp([0.0, 1.0], Rotation.from_euler("xyz", np.stack([start_arr[3:6], end_arr[3:6]])))
        for i in range(multiplier):
            blend = i / multiplier
            position = (1.0 - blend) * start_arr[:3] + blend * end_arr[:3]
            euler = slerp([blend]).as_euler("xyz")[0]
            gripper = (1.0 - blend) * start_arr[6] + blend * end_arr[6]
            dense.append([float(v) for v in (*position, *euler, gripper)])
    dense.append([float(v) for v in rows[-1]])
    return dense


class _ChunkPlayer(threading.Thread):
    """Publish interpolated setpoints at control_dt while inference runs."""

    def __init__(self, arm: ArmInterface, args: argparse.Namespace, halt: threading.Event) -> None:
        super().__init__(name="arm-control", daemon=True)
        self.arm = arm
        self.args = args
        self.halt = halt
        self._lock = threading.Lock()
        self._chunk: list[list[float]] = []
        self._index = 0
        self._played = 0
        self._current: list[float] | None = None
        self.want_infer = threading.Event()

    def install(self, dense: list[list[float]], start_index: int) -> None:
        with self._lock:
            self._chunk = dense
            self._index = max(0, min(start_index, max(len(dense) - 1, 0)))
            self._played = 0
            self.want_infer.clear()

    def index(self) -> int:
        with self._lock:
            return self._index

    def run(self) -> None:
        step_interval = 1.0 / self.args.control_hz
        infer_after = self.args.execute_steps * self.args.interpolate_multiplier
        deadline = time.monotonic()
        while not self.halt.is_set():
            target = None
            with self._lock:
                if self._chunk and self._index < len(self._chunk):
                    target = self._chunk[self._index]
                    self._index += 1
                    self._played += 1
                    if self._played >= infer_after and not self.want_infer.is_set():
                        self.want_infer.set()
            if target is not None:
                current = self._current if self._current is not None else target
                limited = _limit_step(current, target, self.args.max_step_m)
                self.arm.publish_follow_row(limited)
                self._current = limited
            deadline += step_interval
            pause = deadline - time.monotonic()
            if pause > 0:
                time.sleep(pause)
            else:
                deadline = time.monotonic()


def _stop_arm(arm: ArmInterface, switcher: ControllerSwitcherService) -> None:
    """Hold the measured pose, then turn off cartesian tracking.

    The cartesian controller keeps moving toward the last setpoint after this
    process exits. Deactivating it is the SDK software stop.
    """
    pose = arm.follow2_pos()
    if pose is not None:
        for _ in range(5):
            arm.publish_follow_row(pose)
            time.sleep(0.02)
    stopped = switcher.switch_controllers(
        deactivate_controllers=["cart_pose_controller"],
        strictness=0,
        timeout=2.0,
    )
    print("arm stop: cartesian controller deactivated" if stopped else "arm stop: failed to deactivate cartesian controller")


def _limit_step(current: list[float], target: list[float], max_step_m: float) -> list[float]:
    cur = np.asarray(current[:3], dtype=np.float64)
    dst = np.asarray(target[:3], dtype=np.float64)
    delta = dst - cur
    dist = float(np.linalg.norm(delta))
    if max_step_m > 0 and dist > max_step_m:
        dst = cur + delta * (max_step_m / dist)
    out = list(target)
    out[0], out[1], out[2] = float(dst[0]), float(dst[1]), float(dst[2])
    return out


async def _run(args: argparse.Namespace) -> None:
    msgpack = _require_msgpack()
    websockets = _require_websockets()
    uri = f"ws://{args.model_address}:{args.port}"

    rclpy.init()
    arm = ArmInterface(args.camera_topic, args.raw_camera_topic)
    switcher = ControllerSwitcherService()
    executor = rclpy.executors.SingleThreadedExecutor()
    executor.add_node(arm)
    executor.add_node(switcher.node)
    stop = threading.Event()

    def _spin() -> None:
        while rclpy.ok() and not stop.is_set():
            executor.spin_once(timeout_sec=0.05)

    spinner = threading.Thread(target=_spin, daemon=True)
    spinner.start()
    try:
        if not switcher.is_controller_active("cart_pose_controller"):
            print("switching to cartesian control")
            if not switcher.switch_to_cartesian_control():
                raise SystemExit("failed to activate cart_pose_controller")
            time.sleep(1.0)

        deadline = time.time() + args.wait_timeout
        state7 = None
        image = None
        next_report = time.time()
        while time.time() < deadline:
            state7 = arm.follow2_pos()
            image = arm.image_b64()
            if state7 is not None and image is not None:
                break
            if time.time() >= next_report:
                print("still waiting for: " + ", ".join(arm.missing_inputs(args.camera_topic)))
                next_report = time.time() + 2.0
            await asyncio.sleep(0.05)
        if state7 is None or image is None:
            raise SystemExit(
                "timed out waiting for: "
                + ", ".join(arm.missing_inputs(args.camera_topic))
            )

        print(f"connecting {uri}")
        stop_requested = asyncio.Event()
        loop = asyncio.get_running_loop()
        for sig in (signal.SIGINT, signal.SIGTERM):
            loop.add_signal_handler(sig, stop_requested.set)
        try:
            async with websockets.connect(
                uri, ping_interval=None, ping_timeout=None, max_size=None
            ) as ws:
                metadata = msgpack.unpackb(await ws.recv())
                print(f"server metadata: {metadata}")
                player = _ChunkPlayer(arm, args, stop)
                player.start()
                step = 0
                pending_index = 0
                while not stop_requested.is_set() and (
                    args.max_cycles <= 0 or step < args.max_cycles
                ):
                    if step > 0:
                        while not stop_requested.is_set() and not player.want_infer.wait(0.02):
                            pass
                        if stop_requested.is_set():
                            break
                    pending_index = player.index()
                    state7 = arm.follow2_pos()
                    image = arm.image_b64()
                    if state7 is None or image is None:
                        print("missing pose or camera, skip")
                        await asyncio.sleep(0.05)
                        continue
                    if len(state7) != 7:
                        raise RuntimeError(f"follow2_pos dim {len(state7)} != 7")
                    payload = {
                        "state": {"follow2_pos": state7},
                        "views": {
                            "camera_left": None,
                            "camera_front": None,
                            "camera_right": image,
                        },
                        "instruction": np.array([args.instruction], dtype=object),
                    }
                    await ws.send(msgpack.packb(payload))
                    raw = await ws.recv()
                    if stop_requested.is_set():
                        break
                    if isinstance(raw, str):
                        raise RuntimeError(f"server error: {raw}")
                    result = msgpack.unpackb(raw)
                    actions = _actions_from_response(result, state7)
                    dense = _interpolate_follow_rows(actions, args.interpolate_multiplier)
                    if step == 0:
                        start = 0
                    else:
                        elapsed = max(0, player.index() - pending_index)
                        max_skip = args.max_inference_delay * args.interpolate_multiplier
                        start = min(elapsed, max_skip, max(len(dense) - 1, 0))
                    print(
                        f"cycle {step}: state xyz={state7[:3]} "
                        f"actions={len(actions)} dense={len(dense)} start={start}"
                    )
                    if args.dry_run:
                        print(f"first action {actions[0] if actions else None}")
                        return
                    player.install(dense, start)
                    step += 1
        finally:
            for sig in (signal.SIGINT, signal.SIGTERM):
                loop.remove_signal_handler(sig)
            stop.set()
            if "player" in locals():
                player.join(timeout=1.0)
            if stop_requested.is_set():
                print("stopping arm at the current pose")
                spinner.join(timeout=1.0)
                executor.remove_node(switcher.node)
                _stop_arm(arm, switcher)
    finally:
        stop.set()
        spinner.join(timeout=1.0)
        arm.destroy_node()
        switcher.node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Drive the 6-axis arm from a Wall-X websocket model."
    )
    parser.add_argument(
        "--model-address",
        default="39.101.65.229",
        help="Model server IP",
    )
    parser.add_argument("--port", type=int, default=44445, help="Model server port")
    parser.add_argument(
        "--instruction",
        default="Pick up the blue cup.",
        help="Must match the training sentence, e.g. 'Pick up the red cup.'",
    )
    parser.add_argument(
        "--camera-topic",
        default="/eye_in_hand/eye_in_hand/image_raw/image_compressed",
    )
    parser.add_argument(
        "--raw-camera-topic",
        default="/eye_in_hand/eye_in_hand/image_raw",
        help="usb_cam raw Image topic. Used when the compressed topic has no frames.",
    )
    parser.add_argument(
        "--execute-steps",
        type=int,
        default=24,
        help="Model steps to execute before requesting the next chunk. Matches execute_horizon.",
    )
    parser.add_argument(
        "--interpolate-multiplier",
        type=int,
        default=10,
        help="Control steps per model step. 10 with --control-hz 200 is the x2robot_client 5 ms loop.",
    )
    parser.add_argument(
        "--max-inference-delay",
        type=int,
        default=22,
        help="Maximum model steps to skip when a new chunk arrives.",
    )
    parser.add_argument(
        "--control-hz",
        type=float,
        default=200.0,
        help="Rate for sending pose setpoints. x2robot_client uses 200 Hz (control_dt=0.005).",
    )
    parser.add_argument(
        "--max-step-m",
        type=float,
        default=0.0,
        help="Cap each control tick's position change, in meters. 0 disables the cap, matching x2robot_client.",
    )
    parser.add_argument(
        "--max-cycles",
        type=int,
        default=0,
        help="Stop after this many model calls. 0 runs until Ctrl-C.",
    )
    parser.add_argument(
        "--wait-timeout",
        type=float,
        default=10.0,
        help="Seconds to wait for pose, gripper, and camera.",
    )
    parser.add_argument(
        "--dry-run",
        action="store_true",
        help="Query the model once and do not publish arm commands.",
    )
    return parser.parse_args()


def main() -> None:
    args = parse_args()
    try:
        asyncio.run(_run(args))
    except KeyboardInterrupt:
        print("stopped")


if __name__ == "__main__":
    main()
