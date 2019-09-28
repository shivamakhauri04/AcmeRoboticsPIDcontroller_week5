//! "Copyright [2019] Shivam Akhauri and Chinmay Joshi"
/** @author Shivam Akhauri, Chinmay Joshi
* @file Test-Driven Development exercise
* @brief PID Controller implementation
* Details.  PID controller implementation for a new mobile robot product development!
*/
#include <iostream>
#include "../include/PID_Controller.h"


/**
* @brief Parameterized constructor to set required values
* @author Shivam Akhauri
* @param _dt Time interval between each cycle
* @param _kp Multiplier for proportional
* @param _kd Multiplier for derivation
* @param _ki Multiplier for integration
* @param _setPoint Expected value
* @param _velocity Current value
* @param _max Maximum allowed limit of the output
* @param _min Minimum allowed limit of the output
*/
PID_Controller::PID_Controller(double _dt, double _kp, double _kd,
double _ki, double _setpoint, double _velocity, double _max, double _min) {
    dt = _dt;
    kp = _kp;
    kd = _kd;
    ki = _ki;
    max = _max;
    velocity = _velocity;
    setpoint = _setpoint;
}

/**
* @brief Main compute function for PID Controller
* @author Shivam Akhauri
*/
double PID_Controller::compute() {
    double output = 5;
    return output;
}



