//! "Copyright [2019] Shivam_Akhauri and Chinmay_Joshi"
/** @author Shivam Akhauri, Chinmay Joshi
* @file Test-Driven Development exercise
* @brief PID Controller implementation test file
* Details.  PID controller implementation for a new mobile robot product development!
*/

#include <gtest/gtest.h>
#include "../app/PID_Controller.cpp"

TEST(PID_Controller, ComputeFunction) {
  PID_Controller pid(0.1, 22.0, 0.88, 0.99, 0.01, 0.5);
  double vel = pid.compute();
  EXPECT_EQ(5, vel);
}
TEST(PID_Controller, MaxVelocity) {
  PID_Controller pid(0.1, 22.0, 0.88, 0.99, 0.01, 0.5);
  double maxv = pid.max_velocity(100);
  EXPECT_EQ(100, maxv);
}
TEST(PID_Controller, MinVelocity) {
  PID_Controller pid(0.1, 22.0, 0.88, 0.99, 0.01, 0.5);
  double maxv = pid.min_velocity(1);
  EXPECT_EQ(1, maxv);
}

