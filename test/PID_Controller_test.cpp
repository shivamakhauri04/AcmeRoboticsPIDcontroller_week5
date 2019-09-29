//! "Copyright [2019] Shivam_Akhauri and Chinmay_Joshi"
/** @author Shivam Akhauri, Chinmay Joshi
* @file Test-Driven Development exercise
* @brief PID Controller implementation test file
* Details.  PID controller implementation for a new mobile robot product development!
*/

#include <gtest/gtest.h>
#include "../include/PID_Controller.h"

/**
* @brief Unit test for the Compute function
* @author Shivam Akhauri
*/
TEST(PID_Controller, ComputeFunction) {
  PID_Controller pid(0.1, 22.0, 0.88, 0.99, 0.01, 0.5);
  double vel = pid.compute();
  EXPECT_EQ(5.0, vel);
}
/**
* @brief Unit test to check the maximum boundary of the velocity of the PID
* @author Shivam Akhauri
*/
TEST(PID_Controller, MaxVelocity) {
  PID_Controller pid(0.1, 22.0, 0.88, 0.99, 0.01, 0.5);
  double maxv = pid.max_velocity(10.0);
  EXPECT_GT(100.0, maxv);
}
/**
* @brief Unit test to check the manimum boundary of the velocity of the PID
* @author Shivam Akhauri
*/
TEST(PID_Controller, MinVelocity) {
  PID_Controller pid(0.1, 22.0, 0.88, 0.99, 0.01, 0.5);
  double maxv = pid.min_velocity(1.0);
  EXPECT_LT(0.0, maxv);
}

