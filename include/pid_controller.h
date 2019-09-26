//! "Copyright [2019] Shivam Akhauri and Chinmay Joshi"
/** @author Shivam Akhauri, Chinmay Joshi
 * @file Test-Driven Development exercise
* @brief PID Controller implementation
* 
* Details.  PID controller implementation for a new mobile robot product development!
*/
#ifndef PID_CONTROLLER_H_
#define PID_CONTROLLER_H_

#include <iostream>

class PID_Controller {
 private:
        double dt;
        double kp;
        double kd;
        double ki;
        double setpoint;
        double velocity;
        double max;
        double min;
        double integral = 0;
        double pre_error = 0;

 public:
        PID_Controller(double _dt, double _kp, double _kd,
        double _ki, double _setpoint,
        double _velocity, double _max, double _min);
        double compute(void);
};




#endif  //  PID_CONTROLLER_H_
