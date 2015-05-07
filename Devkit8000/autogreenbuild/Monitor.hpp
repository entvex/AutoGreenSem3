#ifndef MONITOR_HPP_
#define MONITOR_HPP_

#include <iostream>
#include <unistd.h>
#include "UART.h"
#include "DataLog.hpp"
#include "Plant.hpp"
#include "SensorData.hpp"
#include "Indstillinger.hpp"
#include "MsgQueue.hpp"
#include "SysMsg.hpp"

using namespace std;

class Monitor
{
public:
  Monitor(UART &uart, DataLog &data, Indstillinger &ind, MsgQueue &syslog)
  {
    uart_ = &uart;
    datalog_ = &data;
    ind_ = &ind;
    syslog_ = &syslog;
  }

  void compareData()
  {

    uart_->connect();

    while(1) {

      if(ind_->getMonitorering()){
      
	// update local values to newest settings.
	date_ = ind_->getDate();
	ind_->GetNotifications(daily_, warning_);
	ind_->GetPlants(virtuel_);
      
	// See if sensor data is aviliable
	int sensor = uart_->getSensor();
	sensordata_ = uart_->getSensorData();
	datalog_->InsertSensorData(sensordata_);

	// compare sensor with virtual plants settings
	bool status; int i;
	while(i < sensor)
	  {
	    status = compareSet(sensordata_, virtuel_[i], 2);
	    if(!status){
	      status = true;
	      SysMsg* monmsg = new SysMsg;
	      monmsg->msg_ = "Dårligt klima";
	      syslog_->send(1, monmsg);
	    }
	  }
	
      }

      usleep(1000000);
    }
  }
 
  ~Monitor(){
  }

private:
  bool compareSet(SensorData data, Plant plant, int offset)
  {
    if(data.temp > plant.temp + offset ||
       data.temp < plant.temp + offset)
      return false;
    
    if(data.humidity > plant.hum + offset ||
       data.humidity < plant.hum + offset)
      return false;

    return true;
  }

  Plant virtuel_[6];
  Date date_;
  bool daily_;
  bool warning_;
  Indstillinger* ind_;
  MsgQueue* syslog_;
  DataLog* datalog_;
  UART* uart_;
  SensorData sensordata_;
};

#endif
