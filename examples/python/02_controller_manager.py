import time
import rclpy
import argparse
from rclpy.node import Node
from controller_manager_msgs.srv import SwitchController, ListControllers

controller_type_dict = {
        "pos": "joint_position_controller",
        "cart": "cart_pose_controller",
        "zero_force": "zero_force_dragging_controller"
        }

class ControllerListService:    
    
    def __init__(self, node_name='controller_list_service'):
        try:
            self.node = Node(node_name)
            self.list_client = self.node.create_client(
                ListControllers,
                '/controller_manager/list_controllers'
            )
            # Wait for service to be available
            if not self.list_client.wait_for_service(timeout_sec=5.0):
                raise RuntimeError("Controller list service not available")
        except ImportError as e:
            raise ImportError(f"ROS2 dependencies not available: {e}. Make sure rclpy and controller_manager_msgs are installed.")  

    def list_controllers(self):
        request = ListControllers.Request()
        future = self.list_client.call_async(request)
        rclpy.spin_until_future_complete(self.node, future, timeout_sec=5.0)
        if future.done():
            return future.result().controller  # Note: singular 'controller', not 'controllers'
        else:
            self.node.get_logger().error("List controllers service call timeout")
            return None
    
    def print_controller_status(self):
        controllers = self.list_controllers()
        print("\n" + "="*80)
        print("Controller Status:")
        print("="*80)
        if controllers is not None:
            for controller in controllers:
                print(f"{controller.name:45} | {controller.type:45} | {controller.state}")
        else:
            print("No controllers found or service call failed")
        print("="*80)
    
    def get_controller_state(self, controller_name: str):
        controllers = self.list_controllers()
        if controllers is not None:
            for controller in controllers:
                if controller.name == controller_name:
                    return controller.state
            return None
        else:
            return None
    
    def destroy(self):
        """Clean up the node"""
        if hasattr(self, 'node'):
            self.node.destroy_node()

class ControllerSwitcherService:
    """
    Service-based controller switcher using ROS2 services instead of subprocess.
    This class requires rclpy to be initialized before use.
    """
    
    def __init__(self, node_name='controller_switcher_service'):
        try:            
            # Check if rclpy is initialized
            if not rclpy.ok():
                rclpy.init()
            
            # Create a node for service calls
            self.node = Node(node_name)
            self.list_service = ControllerListService(node_name + '_list')  # For verification after switching
            
            # Create service client
            self.switch_client = self.node.create_client(
                SwitchController,
                '/controller_manager/switch_controller'
            )
            
            # Wait for service to be available
            if not self.switch_client.wait_for_service(timeout_sec=5.0):
                raise RuntimeError("Controller switch service not available")
                
        except ImportError as e:
            raise ImportError(f"ROS2 dependencies not available: {e}. Make sure rclpy and controller_manager_msgs are installed.")
    
    def switch_controllers(self, activate_controllers=None, deactivate_controllers=None, 
                          activate_asap=True, strictness=1, timeout=5.0):
        """
        Switch controllers using ROS2 service
        
        Args:
            activate_controllers: List of controller names to activate
            deactivate_controllers: List of controller names to deactivate
            activate_asap: Whether to activate as soon as possible
            strictness: 0=BEST_EFFORT, 1=STRICT
            timeout: Timeout for the service call
            
        Returns:
            bool: True if successful, False otherwise
        """
       
        if activate_controllers is None:
            activate_controllers = []
        if deactivate_controllers is None:
            deactivate_controllers = []
        
        # Create request
        request = SwitchController.Request()
        request.activate_controllers = activate_controllers
        request.deactivate_controllers = deactivate_controllers
        request.activate_asap = activate_asap
        request.strictness = strictness
        request.timeout = rclpy.duration.Duration(seconds=0.0).to_msg()
        
        # Call service
        future = self.switch_client.call_async(request)
        rclpy.spin_until_future_complete(self.node, future, timeout_sec=timeout)
        
        if future.done():
            try:
                response = future.result()
                if response is not None and response.ok:
                    return True
                else:
                    self.node.get_logger().error(f"Service call failed: {response}")
                    return False
            except Exception as e:
                self.node.get_logger().error(f"Service call exception: {e}")
                return False
        else:
            self.node.get_logger().error("Service call timeout")
            return False
    
    def safe_switch(self, activate_list=None, deactivate_list=None):
        """
        Safe switch with conflict resolution (similar to ControllerSwitcher)
        """
        # Define conflict groups
        conflict_groups = {
            "joint_position_controller": ["zero_force_dragging_controller", "cart_pose_controller"],
            "zero_force_dragging_controller": ["joint_position_controller", "cart_pose_controller"],
            "cart_pose_controller": ["joint_position_controller", "zero_force_dragging_controller"]
        }
        
        if activate_list is None:
            activate_list = []
        if deactivate_list is None:
            deactivate_list = []
        
        # Auto-add conflicting controllers to deactivate list
        for controller_to_activate in activate_list:
            if controller_to_activate in conflict_groups:
                deactivate_list.extend(conflict_groups[controller_to_activate])
        
        deactivate_list = list(set(deactivate_list))
        self.node.get_logger().info(f"Conflict resolution: deactivate_list = {deactivate_list}")
        
        # Get current controller states using service-based list (more reliable)
        controllers = self.list_service.list_controllers()
        if controllers is None:
            self.node.get_logger().warn("Service-based list failed, falling back to subprocess")
            self.manager.list_controllers()
            all_controllers = self.manager.controllers.keys()
            get_state = lambda name: self.manager.get_controller_state(name)
        else:
            all_controllers = {ctrl.name for ctrl in controllers}
            get_state = lambda name: next((ctrl.state for ctrl in controllers if ctrl.name == name), None)
        
        self.node.get_logger().info(f"Available controllers: {list(all_controllers)}")
        
        # Filter deactivate list - always try to deactivate conflicting controllers
        # (it's safe to deactivate an already inactive controller)
        actual_deactivate_list = []
        for controller in deactivate_list:
            if controller in all_controllers:
                state = get_state(controller)
                self.node.get_logger().info(f"Controller '{controller}' state: {state}")
                # Always add to deactivate list if it's in conflict list (safety measure)
                # The service call will handle already-inactive controllers gracefully
                actual_deactivate_list.append(controller)
                if state == "active":
                    self.node.get_logger().info(f"Controller '{controller}' is active, will deactivate")
                else:
                    self.node.get_logger().info(f"Controller '{controller}' is {state}, will attempt deactivation to ensure clean state")
            else:
                self.node.get_logger().warn(f"Controller '{controller}' not found in controller list, but will attempt deactivation anyway")
                # Still try to deactivate even if not in list (might be a parsing issue)
                actual_deactivate_list.append(controller)
        
        # Filter activate list to only include inactive controllers
        actual_activate_list = []
        for controller in activate_list:
            if controller not in all_controllers:
                self.node.get_logger().warn(f"Controller '{controller}' does not exist")
                continue
            state = get_state(controller)
            if state != "active":
                actual_activate_list.append(controller)
        
        # Step 1: Deactivate conflicting controllers
        if actual_deactivate_list:
            self.node.get_logger().info(f"Deactivating controllers: {actual_deactivate_list}")
            success = self.switch_controllers(
                activate_controllers=[],
                deactivate_controllers=actual_deactivate_list,
                activate_asap=False,
                strictness=1
            )
            if not success:
                self.node.get_logger().warn("Deactivation had warnings, but continuing")
            time.sleep(1.5)  # Wait for resource release
        
        # Step 2: Activate target controllers
        if actual_activate_list:
            self.node.get_logger().info(f"Activating controllers: {actual_activate_list}")
            success = self.switch_controllers(
                activate_controllers=actual_activate_list,
                deactivate_controllers=[],
                activate_asap=True,
                strictness=1
            )
            if not success:
                return False
            time.sleep(2)
        
        # Verify the switch using service-based list (more reliable after service calls)
        time.sleep(0.5)  # Give a bit more time for state to propagate
        all_success = True
        for controller in activate_list:
            state = self.list_service.get_controller_state(controller)
            if state != 'active':
                self.node.get_logger().error(f"Controller '{controller}' not activated (state: {state})")
                all_success = False
        
        return all_success
    
    def switch_to_position_control(self):
        """Switch to joint position control"""
        return self.safe_switch(
            activate_list=["joint_position_controller"],
            deactivate_list=["zero_force_dragging_controller", "cart_pose_controller"]
        )
    
    def switch_to_cartesian_control(self):
        """Switch to cartesian control"""
        return self.safe_switch(
            activate_list=["cart_pose_controller"],
            deactivate_list=["joint_position_controller", "zero_force_dragging_controller"]
        )
    
    def switch_to_zero_force_dragging(self):
        """Switch to zero force dragging control"""
        return self.safe_switch(
            activate_list=["zero_force_dragging_controller"],
            deactivate_list=["joint_position_controller", "cart_pose_controller"]
        )
    
    def switch_to_controller(self, controller_type: str):
        """
        Switch to a controller based on type string
        
        Args:
            controller_type: "pos", "cart", or "zero_force"
        
        Returns:
            bool: True if successful, False otherwise
        """
        if controller_type == "pos":
            return self.switch_to_position_control()
        elif controller_type == "cart":
            return self.switch_to_cartesian_control()
        elif controller_type == "zero_force":
            return self.switch_to_zero_force_dragging()
        else:
            self.node.get_logger().error(f"Unknown controller type: {controller_type}")
            return False
    
    def destroy(self):
        """Clean up the node"""
        if hasattr(self, 'node'):
            self.node.destroy_node()

def main(controller_type: str, list_controllers: bool, ros_args=None):
    """test controller switcher service"""
    rclpy.init(args=ros_args)
    switcher = ControllerSwitcherService()
    list_service = ControllerListService()
    if list_controllers:
        list_service.print_controller_status()
        exit(0)
    if controller_type is not None:
        if not switcher.switch_to_controller(controller_type):
            print(f"switch to {controller_type_dict[controller_type]} failed")
            switcher.destroy()
            list_service.destroy()
            rclpy.shutdown()
            exit(1)    
        print(f"switch to {controller_type_dict[controller_type]} success")
        switcher.destroy()
        list_service.destroy()
        rclpy.shutdown()
        exit(0)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description='Controller Manager - Switch between different robot arm controllers',
        epilog=f'Valid controller types: {list(controller_type_dict.keys())}'
    )
    parser.add_argument('--switch', action='store', default=None, 
                       help=f'switch to a controller type: {list(controller_type_dict.keys())}')
    parser.add_argument('--list', action='store_true', default=False, 
                       help='list all controllers status')
    args = parser.parse_args()
    
    if args.list:
        main(None, args.list, ros_args=None)
        exit(0)
    
    if args.switch is not None:
        if args.switch not in controller_type_dict:
            print(f"error: invalid controller type: {args.switch}")
            print(f"valid controller types: {list(controller_type_dict.keys())}")
            exit(1)
        main(args.switch, args.list, ros_args=None)
    else:
        parser.print_help()
        exit(0)
    
    rclpy.shutdown()
    exit(0)
