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
* @file PID_Controller.cpp
* @author Shivam Akhauri 
* @date 22 November 2019
* @copyright 2019 Shivam Akhauri
* @brief function defination for the parent class
*/

#include <iostream>
#include "PID_Controller.h"
#include "PID_Interface.h"

PID::PID() {
  // initialize the class variable values to default values
  kd = 1;
  ki = 0.1;
  kp = .5;
  sampleTime = 0.2;
  stepError = 0;
  iPart = 0;
  outMax = 10;
  outMin = -100;
}

PID::PID(double _kp, double _kd, double _ki, double _dt) {
  // initilize the class variable values
  kp = _kp;
  kd = _kd;
  ki = _ki;
  sampleTime = _dt;
  stepError = 0;
  iPart = 0;
}


PID::~PID() {
  // destructor/**
}

double PID::compute(double targetSetPoint, double actualVelocity) {
  // calculate error
    double error = targetSetPoint - actualVelocity;
    // integral gain
    iPart += error * sampleTime;
    // pid output
    double output = kp * error + ki * iPart +
    kd * ((error - stepError) / sampleTime);
    stepError = error;
    // daturation values for the pid
    if ( output > outMax ) {
      // saturate to max value
      output = outMax;
      } else {
      // saturate to min value
      output = outMin;
      }
    return output;
}
