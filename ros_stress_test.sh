#!/bin/zsh
source ~/.zshrc
alias goto="cd /home/spacehauc/code/ros/stress_test"
alias setup="source devel/setup.zsh"

alias run="rosrun my_ros_package"


alias rosgo="goto; setup; run"
{
rosgo my_publisher1&
sleep 1
rosgo my_publisher2&
sleep 1
rosgo my_publisher3&
sleep 1
rosgo my_publisher4&
sleep 1
rosgo my_publisher5&
sleep 1
rosgo my_publisher6&
sleep 1
rosgo my_publisher7&
sleep 1
rosgo my_publisher8&
sleep 1
rosgo my_publisher9&
sleep 1
rosgo my_publisher10&
sleep 1
rosgo my_subscriber1&
rosgo my_subscriber2&
rosgo my_subscriber3&
rosgo my_subscriber4&
rosgo my_subscriber5&
rosgo my_subscriber6&
rosgo my_subscriber7&
rosgo my_subscriber8&
rosgo my_subscriber9&
} &> /dev/null
rosgo my_subscriber10
