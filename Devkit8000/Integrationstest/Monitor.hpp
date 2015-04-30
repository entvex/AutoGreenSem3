#ifndef MONITOR_HPP_
#define MONITOR_HPP_

#include <iostream>
#include "UART.hpp"
#include "DataLog.hpp"
#include "Plant.hpp"
#include "SensorData.hpp"
#include "DateStruct.hpp"
#include "Indstillinger.hpp"

using namespace std;

class Monitor
{
public:
  Monitor(){}

  /*void setInd(UART* uart, Datalog* data)
  {
    //  uart_ =  uart;
    //  datalog_ = data;
  }
  */

  void compareData()
  {
    /*
    // update local values to newest settings.
    ind_.GetDate(date_);
    ind_.GetNotifications(daily_, warning_);
    ind_.GetPlants(virtuel_);
    */

    // check for sensors
    uart_->scanForSensors();
    sensordata_ = uart_->getSensorData();
    datalog_->InsertSensorData(sensordata_);
    
    // compare sensor with virtual plants settings
    bool status; int i;
    while(i < 6)
      {
	status = compareSet(virtuel_[i], sensordata_, 2);
	if(!status)
	  status = true; //send message to systemlog
      }
  }
 
  ~Monitor(){
  }

private:
  bool compareSet(SensorData data, Plant plant, int offset)
  {
    if(data.temp > plant.temp + offset || data.temp < plant.temp + offset)
      return false;
    
    if(data.light > plant.light + offset || data.light < plant.light + offset)
      return false;

    if(data.humidity > plant.hum + offset ||
       data.humidity < plant.hum + offset)
      return false;

    return true;
  }

  Plant[] virtuel_;
  Date date_;
  bool daily_;
  bool warning_;
  Indstillinger ind_;
  DataLog* datalog_;
  UART* uart_;
  SensorData sensordata_;
};

#endif
