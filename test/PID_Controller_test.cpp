
#include <iostream>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "basePID.h"
#include "GmockStatic.h"
#include "PID_Interface.h"
#include "PID_Controller.h"

using ::testing::Return;
using ::testing::AtLeast;
using ::testing::_;


/**
 *@brief 
 *@param none
 *@return none
 */

TEST(GmockStatic, computePIDImplemeINCLUDE_PID_H_ntationtest) {
  PID testobj;
  double temp = testobj.compute(1, 2);
  EXPECT_EQ(-100, temp);
  std::unique_ptr<ParentMock> node(new ParentMock);
  std::unique_ptr<GmockStatic> m;
  EXPECT_CALL(*node , compute(1, 2)).Times(1).WillOnce(Return(0.0));
  m->compute(std::move(node));
}

TEST(GmockStatic, proportionalGainSetterTest) {
  PID testobj;
  EXPECT_EQ(1, testobj.setKp(3));
  std::unique_ptr<ParentMock> node(new ParentMock);
  std::unique_ptr<GmockStatic> m;
  EXPECT_CALL(*node, setKp(3)).Times(1);
  m->set_Kp(std::move(node));
}

TEST(GmockStatic, integralGainSetterTest) {
  PID testobj;
  EXPECT_EQ(1, testobj.setKi(1.7));
  std::unique_ptr<ParentMock> node(new ParentMock);
  std::unique_ptr<GmockStatic> m;
  EXPECT_CALL(*node, setKi(1.7)).Times(1);
  m->set_Ki(std::move(node));
}

TEST(GmockStatic, derievativeGainSetterTest) {
  PID testobj;
  EXPECT_EQ(1, testobj.setKd(4));
  std::unique_ptr<ParentMock> node(new ParentMock);
  std::unique_ptr<GmockStatic> m;
  EXPECT_CALL(*node, setKd(4)).Times(1);
  m->set_Kd(std::move(node));

  
}

