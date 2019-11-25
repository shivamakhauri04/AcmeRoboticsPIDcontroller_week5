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
* @file GmockStatic.h
* @author Shivam Akhauri 
* @date 22 November 2019
* @copyright 2019 Shivam Akhauri
* @brief set the gmock static classes.
* make the function call for gmock testing
*/

#include <memory>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "PID_Interface.h"

class GmockStatic : public ::testing::Test {
 public:
  // static test compute
  void compute(std::unique_ptr<ParentPID> node) {
    node->compute(1, 2);
  }
  // static test setter Ki
  void set_Ki(std::unique_ptr<ParentPID> node) {
    node->setKi(1.7);
  }
  // static test setter kd
  void set_Kd(std::unique_ptr<ParentPID> node) {
    node->setKd(4);
  }
  // static test setter // kp
  void set_Kp(std::unique_ptr<ParentPID> node) {
  node->setKp(3);
  }
};
