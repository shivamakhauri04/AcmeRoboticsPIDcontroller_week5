**\#\#\# PID Controller implementation from ACME Robotics. **

Welcome to Acme Robotics. Here, we present a PID for our new mobile
robot product.

A PID controller is a closed loop controller which uses feedback
mechanism. A PID controller continuously calculates an error value e(t)
as the difference between a desired set-point (SP) and a measured
process variable (PV) and applies a correction based on proportional,
integral, and derivative terms (denoted by P, I, and D respectively).

\#\#\# **Prelude**

![](media/image1.png){width="6.28125in" height="1.7291666666666667in"}

In the above formula, we see that the PID output is an summation of the
proportional term, the derivative term and the integral term.

**\#\#\# Implementation Details**

The implementation inputs variables kp, kd and ki. It defines a compute
function which calculates the corrected velocity, given a set-point. The
implementation is done in C++ and Google style guides have been
followed. We initially stub the compute function to verify the pipeline
sanity and work across teams to have the full implementation

**\#\#\# Code Coverage and Travis**

The link to code coverage can be found here

***Travis path :*** \[!\[Build

\[!\[Build
Status\]([*https://travis-ci.org/shivamakhauri04/cpp-boilerplate.svg?branch=master*](https://travis-ci.org/shivamakhauri04/cpp-boilerplate.svg?branch=master))\](https://travis-ci.org/shivamakhauri04/cpp-boilerplate)

***Coveralls :***

\[!\[Coverage
Status\](https://coveralls.io/repos/github/shivamakhauri04/cpp-boilerplate/badge.svg?branch=team\_a)\](https://coveralls.io/github/shivamakhauri04/cpp-boilerplate?branch=team\_a)

**\#\#\# Compiling and Running**

\`\`\`

store the file in your home directory

cd &lt;path to directory&gt;

cd /Week5/

mkdir build

cd build

cmake ..

make

cd ..

cppcheck --enable=all --std=c++11 -I include/
--suppress=missingIncludeSystem \$( find . -name \*.cpp | grep -vE -e
"\^./build/" )

To run program: ./app/shell-app

To test program: ./test/cpp-test

\`\`\`

\#\#\# **Contributors**

-Shivam Akhauri (Driver)

Chinmay Joshi (Navigator)
