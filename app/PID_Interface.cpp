
#include "PID_Interface.h"

ParentPID::ParentPID(): kp(0), kd(0), ki(0)
, sampleTime(0), stepError(0), iPart(0) {
}

ParentPID::~ParentPID() {
}

bool ParentPID::setKd(double _kd) {
  kd = _kd;
  return true;
}

bool ParentPID::setKp(double _kp) {
  kp = _kp;
  return true;
}

bool ParentPID::setKi(double _ki) {
  ki = _ki;
  return true;
}
