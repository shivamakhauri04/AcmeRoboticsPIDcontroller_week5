/**
Copyright [MIT] 2019 Shivam Akhauri
Permission is hereby granted, free of charge, to any person obtaining a copy of 
this software and associated documentation files (the "Software"), to deal in 
the Software without restriction, including without limitation the rights to 
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:
The above copyright notice and this permission notice shall be included in all 
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
 COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER 
 IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN 
 CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**/

/**
* @file basePID.h
* @author Shivam Akhauri 
* @date 22 November 2019
* @copyright 2019 Shivam Akhauri
* @brief test definations
*/

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
 * @brief      TEST gmock and gtest 
 */

TEST(GmockStatic, computePIDImplemeINCLUDE_PID_H_ntationtest) {
  PID testobj;
  // gtest the computes function
  double temp = testobj.compute(1, 2);
  EXPECT_EQ(-100, temp);
  // gmock the compute function
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
  // gtest the integral gai
  PID testobj;
  EXPECT_EQ(1, testobj.setKi(1.7));
  // gmock the integral gain
  std::unique_ptr<ParentMock> node(new ParentMock);
  std::unique_ptr<GmockStatic> m;
  EXPECT_CALL(*node, setKi(1.7)).Times(1);
  m->set_Ki(std::move(node));
}

TEST(GmockStatic, derievativeGainSetterTest) {
  // gtest the derievative gain
  PID testobj;
  EXPECT_EQ(1, testobj.setKd(4));
  // gmock the integral gain
  std::unique_ptr<ParentMock> node(new ParentMock);
  std::unique_ptr<GmockStatic> m;
  EXPECT_CALL(*node, setKd(4)).Times(1);
  m->set_Kd(std::move(node));
}

