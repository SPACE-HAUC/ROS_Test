#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <sstream>
#include <time.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  srand(time(NULL));
  ros::init(argc, argv, "my_publisher5");
  ros::NodeHandle rosNodeHandle;

  ros::Publisher myTopic_publisher =
    rosNodeHandle.advertise<std_msgs::Int32>("myTopic", 1000);
  ros::Rate loop_rate(1);
  while(ros::ok()) {
    std_msgs::Int32 msg;
    msg.data = rand() % 100;

    ROS_INFO("%d", msg.data);

    myTopic_publisher.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
  }

return 0;

}
