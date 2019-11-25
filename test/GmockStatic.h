
#include <memory>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "PID_Interface.h"

/**
 * @brief GMockStatic Class
 * 
 */
class GmockStatic : public ::testing::Test {
 public:

  void compute(std::unique_ptr<ParentPID> node) {
    node->compute(1, 2);
  }

  void set_Ki(std::unique_ptr<ParentPID> node) {
    node->setKi(1.7);
  }
  void set_Kd(std::unique_ptr<ParentPID> node) {
    node->setKd(4);
  }
  void set_Kp(std::unique_ptr<ParentPID> node) {
  node->setKp(3);
  }
};
