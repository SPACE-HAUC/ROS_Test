#include "ros/ros.h"
#include "std_msgs/Int32.h"

void messageCallback(const std_msgs::Int32::ConstPtr& msg) {
  ROS_INFO("Received message: [%d]", msg ->data);
}

int main(int argc, char* argv[]) {
  ros::init(argc, argv, "subscriber9");
  ros::NodeHandle rosNodeHandle;

  ros::Subscriber myTopic_subscriber =
    rosNodeHandle.subscribe("myTopic", 1000, messageCallback);

    ros::spin();
    return 0;
}
