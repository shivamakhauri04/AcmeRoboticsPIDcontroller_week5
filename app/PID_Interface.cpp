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
* @file PID_Interface.cpp
* @author Shivam Akhauri 
* @date 22 November 2019
* @copyright 2019 Shivam Akhauri
* @brief function defination for the derived class
*/
#include "PID_Interface.h"

ParentPID::ParentPID(): kp(0), kd(0), ki(0)
, sampleTime(0), stepError(0), iPart(0) {
}

ParentPID::~ParentPID() {
}

bool ParentPID::setKd(double _kd) {
  // redefination of the derived class
  kd = _kd;
  return true;
}

bool ParentPID::setKp(double _kp) {
  // redefination of the derieved class
  kp = _kp;
  return true;
}

bool ParentPID::setKi(double _ki) {
  // redefination of the derieved class
  ki = _ki;
  return true;
}
