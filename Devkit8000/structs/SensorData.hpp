#ifndef SensorData_HPP_
#define SensorData_HPP_

#include "Date.hpp"

struct SensorData
{
  Date time;
  int temp;
  int light;
  int humidity;
  int grund[6];
};

#endif
