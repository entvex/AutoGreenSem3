#ifndef MONITOR_HPP_
#define MONITOR_HPP_

#include <iostream>
#include "UART.hpp"
#include "Datalog.hpp"
//#include "Systemlog.hpp"
//#include "Indstillinger.hpp"

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
    /*

    // update local values to newest settings.
    ind_.getDate(date_);
    ind_.getNotifications(daily_, warning_);
    ind_.getPlants(virtuel_);
	
    */

    //check for sensors
    uart_->scanForSensors();
    sensordata_ = uart_->getSensorData();
    datalog_->insertSensorData(sensordata_);

  }
 
  ~Monitor(){
  }

private:
  //Plant[] virtuel_;
  //Plant[] real_;
  //Date date_;
  //String emails_;
  //bool daily_;
  //bool warning_;
  //Indstillinger ind_;
  Datalog* datalog_;
  UART* uart_;
  int sensordata_;
};

#endif
