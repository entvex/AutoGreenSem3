#ifndef MONITOR_HPP_
#define MONITOR_HPP_

#include <iostream>
#include <unistd.h>
#include "pthread.h"
#include "UART.h"
#include "DataLog.hpp"
#include "Plant.hpp"
#include "SensorData.hpp"
#include "Indstillinger.hpp"
#include "MsgQueue.hpp"
#include "SysMsg.hpp"
#include "GUIStruct.hpp"

using namespace std;

class Monitor
{

public:
  Monitor(UART &uart, DataLog &data, Indstillinger &ind,
          MsgQueue &syslog)
  {
    uart_ = &uart;
    datalog_ = &data;
    ind_ = &ind;
    syslog_ = &syslog;
    mtx = PTHREAD_MUTEX_INITIALIZER;
    gui.temp = 25;

    for(int i = 0; i < 6; i++)
      {
	gui.status[i] = 1;
	gui.realHum[i] = 0;
	gui.virtualHum[i] = 0;
      }
  }

  ~Monitor(){
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
	//int sensor = uart_->getSensor();
	sensordata_ = uart_->getSensorData();
	datalog_->InsertSensorData(sensordata_);

	/*
	  SysMsg* monmsg = new SysMsg;
	  monmsg->msg_ = "Dårligt klima";
	  syslog_->send(1, monmsg);
	*/
       
	// update live Gui temperature
	gui.temp = sensordata_.temp;

	for(int i = 0; i < 6; i++)
	  {
	    gui.status[i] = compareSet(sensordata_, virtuel_[i], 0, i);
	    gui.realHum[i] = sensordata_.grund[i];
	    gui.virtualHum[i] = virtuel_[i].hum;
	  }

	usleep(10000000);
      }
      usleep(1000000);
    }

  }

  GUIStruct getGuiData(){
    return gui;
  }

private:
  int compareSet(SensorData data, Plant plant, int offset, int i)
  {
    if(plant.hum == 0)
      return 1;

    if(data.grund[i] >= plant.hum + offset)
      return 2;

    return 3;
  }

  GUIStruct gui;
  Plant virtuel_[6];
  Date date_;
  bool daily_;
  bool warning_;
  bool uiStatus;
  Indstillinger* ind_;
  MsgQueue* syslog_;
  DataLog* datalog_;
  UART* uart_;
  SensorData sensordata_;
  pthread_mutex_t mtx;
};

#endif
