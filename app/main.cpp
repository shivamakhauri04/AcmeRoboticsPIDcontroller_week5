
//! "Copyright [2019] Shivam Akhauri and Chinmay Joshi"
/** @author Shivam Akhauri, Chinmay Joshi
* @file Test-Driven Development exercise
* @brief PID Controller implementation
* Details.  PID controller implementation for a new mobile robot product development!
*/
#include <stdio.h>
#include "../include/PID_Controller.h"

/**
* @brief Main compute function for PID Controller
* @author Shivam Akhauri
*/
int main() {
    // Constructor for the PID_Controller class
    PIDController pid(1.0, 0.0, 0.0, 0.0, 0.0, 0.0);
    // Function call to assign max velocity
    pid.max_velocity(10.0);
    // Function call to assign minimum velocity
    pid.min_velocity(0.0);
    // Function call to calculate the pid output
    double output = pid.compute();
    std::cout << "velocity = " << output << std::endl;
    return 0;
}
