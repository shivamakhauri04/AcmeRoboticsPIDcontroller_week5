[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://github.com/shivamakhauri04/AcmeRoboticsPIDcontroller_week5/blob/GMock_Extra_Credit/License.txt)       

### PID Controller implementation from ACME Robotics. 

Welcome to Acme Robotics. Here, we present a PID for our new mobile
robot product.

A PID controller is a closed loop controller which uses feedback
mechanism. A PID controller continuously calculates an error value e(t)
as the difference between a desired set-point (SP) and a measured
process variable (PV) and applies a correction based on proportional,
integral, and derivative terms (denoted by P, I, and D respectively).

### Overview

Logic : changeCalculatedByPID = Kp*(expectedValue-currentValue)+Kd*(previousValue-CurrentValue)+(previousIntegral+Ki*currentError)

In the above formula, we see that the PID output is an summation of the
proportional term, the derivative term and the integral term.

### GMOCK details

Refactored the code to make a ParentPID virtual class and a derived class PID. The derieved class PID redifines the ParentPID. (The original implementation can be understood from the UML (https://github.com/Chinj17/AcmeRoboticsPIDcontroller_week5Assignment/blob/master/UML.png) vs the new the UML  https://github.com/shivamakhauri04/AcmeRoboticsPIDcontroller_week5/blob/GMock_Extra_Credit/UMLs/new_virtual/new.png

Both are added to the UML's folder in the repo.

The gmock and the gtest code can be found in /test/PID_Controller_test.cpp
The Mock methods are defined in /test/basePID.h

Dependency:

Add "../vendor/googletest/googlemock/include ${CMAKE_SOURCE_DIR}/include"   --- to the target_include_directories as an addition to the previuos skeleton.

Add PUBLIC gmock to the target link libraries.



### Compiling and Running

```

-git clone "https://github.com/shivamakhauri04/AcmeRoboticsPIDcontroller_week5.git"
-cd AcmeRoboticsPIDcontroller_week5/
-mkdir build
-cd build
-cmake ..
-make

To run program: ./app/shell-app
To test program: ./test/cpp-test

-cd ..

#### to run Cppcheck
-cppcheck --enable=all --std=c++11 -I include --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" )

#### to run Cpplint
-cpplint $( find . -name \*.hpp -or -name \*.cpp | grep -vE -e "^./build/" -e "^./vendor/" -e "^./docs/" -e "^./results" )

```


## Copyright

Copyright (C) 2019 Shivam Akhauri
For license information, see [LICENSE.txt](LICENSE.txt).
