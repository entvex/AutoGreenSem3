#ifndef MONITOR_HPP_
#define MONITOR_HPP_

#include <iostream>
#include "UART.hpp"
#include "DataLog.hpp"
#include "SensorData.hpp"

using namespace std;

class Monitor
{
public:
  Monitor(){
  }

  void setInd(UART* uart, Datalog* data)
  {
    uart_ =  uart;
    datalog_ = data;
  }

  void compareData()
  {
    //check for sensors
    uart_->scanForSensors();
    sensordata_ = uart_->getSensorData();
    datalog_->insertSensorData(sensordata_);
  }
 
  ~Monitor(){
  }

private:
  DataLog* datalog_;
  UART* uart_;
  SensorData sensordata_;
};

#endif
