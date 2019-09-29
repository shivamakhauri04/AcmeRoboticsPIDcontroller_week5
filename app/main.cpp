
//! "Copyright [2019] Shivam Akhauri and Chinmay Joshi"
/** @author Shivam Akhauri, Chinmay Joshi
* @file Test-Driven Development exercise
* @brief PID Controller implementation
* Details.  PID controller implementation for a new mobile robot product development!
*/
#include <stdio.h>
#include "PID_Controller.cpp"

int main() {
    PID_Controller pid(0.1, 22.0, 0.88, 0.99, 0.01, 0.5);
    pid.max_velocity(100);
    pid.min_velocity(1);
    double output = pid.compute();
    std::cout << "velocity = " << output << std::endl;
    return 0;
}
