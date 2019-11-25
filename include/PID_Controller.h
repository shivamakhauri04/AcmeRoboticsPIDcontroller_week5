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
* @file PID_Controller.h
* @author Shivam Akhauri 
* @date 22 November 2019
* @copyright 2019 Shivam Akhauri
* @brief header for derieved class
*/

#ifndef PID_CONTROLLER_H_
#define PID_CONTROLLER_H_

#include <iostream>
#include "PID_Interface.h"

/**
 * @brief Derieved Class
 *  of the the Parent class
 */
class PID : public ParentPID {
 public:
  /**
   * @brief default constructor PID
   * @param none
   * @return none
   * Initializes all gain values Kp,Kd,KI to 0
   */
  PID();

  /**
   * @brief constructor PID class
   * @param kp (double)
   * @param kd (double)
   * @param ki (double)
   * @param sampleTime (double)
   * @return none
   * Initializes gains and sampleTime to some values
   */
  PID(double kp, double kd, double ki, double sampleTime);

  /**
   * @brief Destructor PID class
   * @param none
   * @return none
   * destroys class objects 
   */
  ~PID();

    /**
   * @brief getKi function
   * @param none
   * @return ki gain (double)
   * returns the integral gain
   */
  double getKi();
  /**
   * @brief getKP function
   * @param none
   * @return kp (double)
   * returns the proportional gain
   */
  double getKp();

  /**
   * @brief getKD function
   * @param none
   * @return kd gain of type double
   * returns the derievative gain
   */
  double getKd();

  /**
   * @brief compute function
   * @param targetSetPoint (double)
   * @param actualVelocity (double)
   * @return double
   */
  double compute(double targetSetpoint, double actualVelocity);

};

#endif /* PID_CONTROLLER_H_ */
