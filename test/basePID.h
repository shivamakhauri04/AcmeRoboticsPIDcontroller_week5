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
* @brief set the mock methods
*/

#ifndef TEST_BASEPID_H_
#define TEST_BASEPID_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "PID_Interface.h"


class ParentMock : public ParentPID {
 public:
  // mock method for Ki 
  MOCK_METHOD1(setKi, bool(double ki));
  // mock method for Kp
  MOCK_METHOD1(setKp, bool(double kp));
  // mock method for kd
  MOCK_METHOD1(setKd, bool(double kd));
  // mock method for compute 
  MOCK_METHOD2(compute, double(double, double));
};

#endif /* TEST_BASEPID_H_ */

