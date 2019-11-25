
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
   * @brief pure virtual comput method
   * @param targetSetpoint
   * @param actualVelocity
   * @return double
   * a pure virtual function to be derived inherited
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
