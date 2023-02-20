#ifndef COMMAND_PUBLISHER_H
#define COMMAND_PUBLISHER_H

#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

class CommandPublisher
{
public:
  CommandPublisher(ros::NodeHandle& nh);
  ~CommandPublisher();

private:
  ros::NodeHandle nh_;
  ros::Publisher cmd_vel_pub_;
  ros::Timer timer_;
  double linear_vel_, angular_vel_;

  void timerCallback(const ros::TimerEvent& event);
  void readParameters();
};

#endif // COMMAND_PUBLISHER_H
