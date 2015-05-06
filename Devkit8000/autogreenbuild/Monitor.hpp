#ifndef MONITOR_HPP_
#define MONITOR_HPP_

#include <iostream>
#include <fstream>
#include <unistd.h>
#include "UART.h"
#include "DataLog.hpp"
#include "Plant.hpp"
#include "SensorData.hpp"
#include "Indstillinger.hpp"
#include "SystemLog.hpp"

using namespace std;

class Monitor
{
public:
  Monitor(UART &uart, DataLog &data, Indstillinger &ind /*SystemLog &syslog*/)
  {
    uart_ = &uart;
    datalog_ = &data;
    ind_ = &ind;
    //syslog_ = &syslog;
  }

  void compareData()
  {

    uart_->connect();

    while(1) {
    cout << "Run while" << endl;


    if(ind_->getMonitorering()){
      
      // update local values to newest settings.
      //date_ = ind_->getDate();
      //ind_->GetNotifications(daily_, warning_);
      //ind_->GetPlants(virtuel_);

      
      // check for sensors
      //int sensor = uart_->getSensor();
      sensordata_ = uart_->getSensorData();

      datalog_->InsertSensorData(sensordata_);
      cout << sensordata_.temp << endl;
    /* // compare sensor with virtual plants settings
      bool status; int i;
      while(i < sensor)
	{
	  status = compareSet(sensordata_, virtuel_[i], 2);
	  if(!status)
	    status = true;
	  //send message to systemlog
	}
    */
    }

    usleep(1000000);
    cout << "Run end" << endl;
    }
  }
 
  ~Monitor(){
  }

private:
 /* bool compareSet(SensorData data, Plant plant, int offset)
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
*/
  Plant virtuel_[6];
  Date date_;
  bool daily_;
  bool warning_;
  Indstillinger* ind_;
  //SystemLog* syslog_;
  DataLog* datalog_;
  UART* uart_;
  SensorData sensordata_;
};

#endif
