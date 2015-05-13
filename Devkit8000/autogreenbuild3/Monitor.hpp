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
    gui.statusOne = true;
    gui.realHumOne = 5;
    gui.virtualHumOne = 5;
    gui.statusTwo = true;
    gui.realHumTwo = 5;
    gui.virtualHumTwo = 5;
    gui.statusThree = true;
    gui.realHumThree = 5;
    gui.virtualHumThree = 5;
    gui.statusFour = true;
    gui.realHumFour = 5;
    gui.virtualHumFour = 5;
    gui.statusFive = true;
    gui.realHumFive = 5;
    gui.virtualHumFive = 5;
    gui.statusSix = true;
    gui.realHumSix = 5;
    gui.virtualHumSix = 5;
  }

  ~Monitor(){
  }


  void compareData()
  {

    uart_->connect();

    while(1) {

      if(ind_->getMonitorering() && uiStatus){
      
    //pthread_mutex_lock(&mtx);

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
	
    // set gui data for plant one
    if(compareSet(sensordata_, virtuel_[0], 0, 0)){
      gui.statusOne = false;
    }
    else {
      gui.statusOne = true;
    }
	
    gui.realHumOne = sensordata_.grund[0];
    gui.virtualHumOne = virtuel_[0].hum;
	
    // set gui data for plant two
    if(compareSet(sensordata_, virtuel_[1], 0, 1)){
      gui.statusTwo = false;
    }
    else {
      gui.statusTwo = true;
    }
	
    gui.realHumTwo = sensordata_.grund[1];
    gui.virtualHumTwo = virtuel_[1].hum;
	

    // set gui data for plant three
    if(compareSet(sensordata_, virtuel_[2], 0, 2)){
      gui.statusThree = false;
    }
    else {
      gui.statusThree = true;
    }
	
    gui.realHumThree = sensordata_.grund[2];
    gui.virtualHumThree = virtuel_[2].hum;
	
    // set gui data for plant four
    if(compareSet(sensordata_, virtuel_[3], 0, 3)){
      gui.statusFour = false;
    }
    else {
      gui.statusFour = true;
    }
	
    gui.realHumFour = sensordata_.grund[3];
    gui.virtualHumFour = virtuel_[3].hum;
	  
    // set gui data for plant five
    if(compareSet(sensordata_, virtuel_[4], 0, 4)){
      gui.statusFive = false;
    }
    else {
      gui.statusFive = true;
    }
	
    gui.realHumFive = sensordata_.grund[4];
    gui.virtualHumFive = virtuel_[4].hum;
	

    // set gui data for plant six
    if(compareSet(sensordata_, virtuel_[5], 0, 5)){
      gui.statusSix = false;
    }
    else {
      gui.statusSix = true;
    }
	
    gui.realHumSix = sensordata_.grund[5];
    gui.virtualHumSix = virtuel_[5].hum;
	
    //pthread_mutex_unlock(&mtx);


	usleep(10000000);
      }
      usleep(1000000);
    }

  }

  GUIStruct getGuiData(){
   // pthread_mutex_lock(&mtx);
    return gui;
   // pthread_mutex_unlock(&mtx);
  }

private:
  bool compareSet(SensorData data, Plant plant, int offset, int i)
  {
    if(data.grund[i] >= plant.hum + offset)
      return false;

    return true;
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
