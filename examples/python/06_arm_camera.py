#! /usr/bin/env python3
import os
import numpy as np
import queue

def check_display_available():
    display = os.environ.get('DISPLAY')
    if not display:
        return False
    
    try:
        import subprocess
        result = subprocess.run(['xdpyinfo'], capture_output=True, timeout=1)
        return result.returncode == 0
    except:
        try:
            import cv2
            cv2.namedWindow('__test__', cv2.WINDOW_NORMAL)
            cv2.destroyWindow('__test__')
            return True
        except:
            return False

USE_DISPLAY = check_display_available()
if not USE_DISPLAY:
    print("WARNING: Display not available. Running in headless mode (no GUI).")
    print("If running over SSH, use: ssh -X user@host")
    print("Or set DISPLAY environment variable: export DISPLAY=:0")
else:
    print(f"Display available: {os.environ.get('DISPLAY')}")

try:
    import cv2
except ImportError as e:
    print(f"ERROR: Failed to import cv2: {e}")
    USE_DISPLAY = False

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage

class ArmCameraViewer(Node):
    def __init__(self, max_queue_size=2):
        super().__init__('arm_camera_viewer')
        
        self.image_queue = queue.Queue(maxsize=max_queue_size)
        self.use_display = USE_DISPLAY
        
        self.subscription = self.create_subscription(
            CompressedImage,
            '/eye_in_hand/eye_in_hand/image_raw/image_compressed',
            self.image_callback,
            1)
        
        if self.use_display:
            try:
                cv2.namedWindow('arm_camera', cv2.WINDOW_NORMAL)
                cv2.resizeWindow('arm_camera', 1280, 720)
                self.get_logger().info('Display window created')
            except Exception as e:
                self.get_logger().warn(f'Failed to create display window: {e}')
                self.use_display = False
        
    def image_callback(self, msg):
        show_image(msg, 'arm_camera', is_stream=True, use_display=self.use_display)
    
    def destroy_node(self):
        if self.use_display:
            try:
                cv2.destroyAllWindows()
            except:
                pass
        super().destroy_node()

def show_image(image: CompressedImage, source: str, is_stream: bool = False, use_display: bool = True):
    """
    Decodes and displays a CompressedImage using OpenCV and prints metadata.
    """
    if image.header:
        timestamp = f"{image.header.stamp.sec}.{image.header.stamp.nanosec:09d}"
        print(f"[{timestamp}] Received image from {source} ({len(image.data)} bytes, {image.format})")
    else:
        print(f"Received image from {source} ({len(image.data)} bytes, {image.format})")

    try:
        image_bytes = bytes(image.data)
        is_depth = "depth" in image.format.lower()

        if is_depth:
            # Strip header before trying to decode.
            image_bytes = image_bytes[12:]
        
        np_arr = np.frombuffer(image_bytes, np.uint8)
        
        if is_depth:
            frame = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)
        else:
            frame = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)

        if frame is not None:
            if use_display:
                display_frame = frame
                if is_depth:
                    display_frame = cv2.normalize(frame, None, 0, 255, cv2.NORM_MINMAX, dtype=cv2.CV_8U)
                    display_frame = cv2.applyColorMap(display_frame, cv2.COLORMAP_JET)

                try:
                    cv2.imshow(source, display_frame)
                    if is_stream:
                        if cv2.waitKey(1) & 0xFF == ord('q'):
                            raise KeyboardInterrupt("Stream stopped by user ('q' pressed).")
                    else:
                        print("-> Press any key in the image window or close it to continue.")
                        while cv2.getWindowProperty(source, cv2.WND_PROP_VISIBLE) >= 1:
                            if cv2.waitKey(100) != -1:
                                break
                except cv2.error as e:
                    print(f"OpenCV display error (display may not be available): {e}")
                    print("Continuing in headless mode...")
            else:
                print(f"  -> Decoded image: {frame.shape}, dtype: {frame.dtype}")
        else:
            print(f"Could not decode image from {source}.")
    except Exception as e:
        print(f"Error processing image: {e}")
        import traceback
        traceback.print_exc()

def main(args=None):
    rclpy_initialized = False
    viewer = None
    
    try:
        rclpy.init(args=args)
        rclpy_initialized = True
        
        if not os.environ.get('DISPLAY'):
            for disp in [':0', ':0.0', ':1', ':1.0']:
                os.environ['DISPLAY'] = disp
                global USE_DISPLAY
                USE_DISPLAY = check_display_available()
                if USE_DISPLAY:
                    break
        
        viewer = ArmCameraViewer()
        
        print("Camera viewer started. Press Ctrl+C to exit.")
        if USE_DISPLAY:
            print("Press 'q' in the image window to stop.")
        else:
            print("Running in headless mode (no GUI).")
        
        rclpy.spin(viewer)
    except KeyboardInterrupt:
        print("\n\nStream stopped by user.")
    except Exception as e:
        print(f"Error: {e}")
        import traceback
        traceback.print_exc()
    finally:
        if viewer is not None:
            try:
                viewer.destroy_node()
            except:
                pass
        if rclpy_initialized:
            try:
                if rclpy.ok():
                    rclpy.shutdown()
            except:
                pass

if __name__ == '__main__':
    main()
