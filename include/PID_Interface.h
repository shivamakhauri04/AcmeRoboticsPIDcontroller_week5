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
* @file PID_Interface.h
* @author Shivam Akhauri 
* @date 22 November 2019
* @copyright 2019 Shivam Akhauri
* @brief header of the parent class
*/
#ifndef PID_INTERFACE_H_
#define PID_INTERFACE_H_

#include <iostream>

/**
 * @brief Parent PID Class
 * class for inheritance
 */

class ParentPID {
 protected:
  double kp;
  double kd;
  double ki;
  double sampleTime;
  double stepError;
  double iPart;
  double outMax;
  double outMin;

 public:
  /**
   * @brief constructor PArentPID class
   * @param none
   * @return none
   * Initializes class variable to 0
   */
  ParentPID();

  /**
   * @brief virtual destructor for PArentPID
   * @param none
   * @return none
   * destroys class objects
   */
  virtual ~ParentPID()= 0;

  /**
   * @brief pure virtual compute method
   * @param targetSetpoint
   * @param actualVelocity
   * @return double
   * a pure virtual function to be inherited
   */
  virtual double compute(double targetSetpoint,
  double actualVelocity) = 0;

  /**
   * @brief  setKp virtual function
   * @param kp (double)
   * @return boolean
   * set the kp gain
   */
  virtual bool setKp(double kp);

  /**
   * @brief virtual function setKi
   * @param ki (double)
   * @return boolean
   * set the ki value
   */
  virtual bool setKi(double ki);

  /**
   * @brief setKd virtual function 
   * @param kd (double)
   * @return boolean
   * set the kd value
   */
  virtual bool setKd(double kd);
};

#endif /* PID_INTERFACE_H_ */
