//! "Copyright [2019] Shivam_Akhauri and Chinmay_Joshi"
/** @author Shivam Akhauri, Chinmay Joshi
* @file Test-Driven Development exercise
* @brief PID Controller implementation test file
* Details.  PID controller implementation for a new mobile robot product development!
*/

#include <gtest/gtest.h>
#include "../app/PID_Controller.cpp"

TEST(PID_Controller, ComputeFunction) {
  PID_Controller pid(0.1, 22.0, 0.88, 0.99, 0.01, 0.5, 100.0, 5.0);
  double res = pid.compute();
  EXPECT_EQ(5, res);
}

TEST(PID_Controller, DivideByZeroError) {
  PID_Controller pid(0.1, 22.0, 0.88, 0.99, 0.01, 0.5, 100.0, 5.0);
  double res = pid.compute();
  EXPECT_EQ(5, res);
}

