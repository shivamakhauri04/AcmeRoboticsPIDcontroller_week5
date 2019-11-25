
#ifndef TEST_BASEPID_H_
#define TEST_BASEPID_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "PID_Interface.h"


class ParentMock : public ParentPID {
 public:
  MOCK_METHOD1(setKi, bool(double ki));
  MOCK_METHOD1(setKp, bool(double kp));
  MOCK_METHOD1(setKd, bool(double kd));
  MOCK_METHOD2(compute, double(double, double));
};

#endif /* TEST_BASEPID_H_ */

