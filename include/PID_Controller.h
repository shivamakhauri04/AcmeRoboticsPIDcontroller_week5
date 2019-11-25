
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
