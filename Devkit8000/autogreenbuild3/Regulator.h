

#ifndef Regulator_H_
#define Regulator_H_

#include <iostream>
#include <unistd.h>
//include others
#include "SensorData.hpp"
#include "Plant.hpp"
#include "UART.h"
#include "MsgQueue.hpp"
#include "Indstillinger.hpp"
#include "SysMsg.hpp"

using namespace std;

class Regulator
{
 public:
  Regulator(UART * uart_, Indstillinger * settings_,
	    MsgQueue* systemlog_, DataLog *datalog_)
    {
      //* set pointers
      uart = uart_;
      settings = settings_;
      systemlog = systemlog_;
      datalog = datalog_;
      heatON = false;
      ventsON = false;
      windowON = false;
      water1ON = false;
      water2ON = false;
      water3ON = false;
      water4ON = false;
      water5ON = false;
      water6ON = false;
      uart->activateSensor("ventoff");
      uart->activateSensor("heatoff");
      uart->activateSensor("water1off");
      uart->activateSensor("water2off");
      uart->activateSensor("water3off");
      uart->activateSensor("water4off");
      uart->activateSensor("water5off");
      uart->activateSensor("water6off");

      uart->activateSensor("windowoff");


    }

  ~Regulator()
    {

    }

  void run()
  {
    //run is running at all times
      if(!settings->getRegulering())
	{
	  //   cout << "regulator is not active\n";
	  usleep(100000);
	}
      else
	{
           //cout << "regulator is active\n";
	  //load data into plants from Settings (indstillinger)
	  loadData();
	  SensorData loadeddata = datalog->GetNewestData();
	  ControlData(loadeddata);

	  //linux
	  usleep(100000);
	}
  }

  void ControlData( SensorData drivhus_data)
  {

    /*lets make some control checks*/

    /*Get newestSensorData*/

    double temp_drivhus = drivhus_data.temp;

    /* Compare average temperature for plants to Actual temps*/
    double avg_temp_drivhus = plant1.temp;//(plant1.temp + plant2.temp + plant3.temp + plant4.temp + plant5.temp + plant6.temp) / 6;

    bool use_heater = false;
    bool use_vents = false;
    settings->GetHardware(use_heater,use_vents);

    if (temp_drivhus <= avg_temp_drivhus + 0.5 &&
	temp_drivhus >= avg_temp_drivhus - 0.5)
      {
	cout << "temp ok \n";
	//temp is OK, close and shut everything off

	//    SysMsg* monmsg = new SysMsg;
	//    monmsg->msg_ = "slukker alle aktuatorer";
	//    systemlog->send(1, monmsg);
        if(ventsON)
        {
	uart->activateSensor("ventoff");
	usleep(100);
        ventsON = false;
        }
        if(heatON)
        {
	uart->activateSensor("heatoff");
	usleep(100);
        heatON = false;
        }
        if(windowON)
        {
	uart->activateSensor("windowoff");
	usleep(100);
        windowON = false;
        }


      }
    else if (temp_drivhus > avg_temp_drivhus + 0.5)
      {
	cout << "temp meget varm\n";
	//    SysMsg* monmsg = new SysMsg;
	//    monmsg->msg_ = "vent tændes, window åbnes";
	//    systemlog->send(1, monmsg);
	//start vent
	if(use_vents)
	  {
            if(!ventsON)
            {
	    uart->activateSensor("venton");
        usleep(100);
            ventsON = true;
            }
	  }
	else
	  {
	    //        SysMsg* monmsg = new SysMsg;
	    //        monmsg->msg_ = "vent kan ikke åbnes";
	    //        systemlog->send(1, monmsg);
	  }
	//open window
    if(heatON)
    {
        uart->activateSensor("heatoff");
        usleep(100);
      heatON = false;
    }
        if(!windowON)
        {
	uart->activateSensor("windowon");
	usleep(100);
        windowON = true;
        }

      }
    else if (temp_drivhus >= avg_temp_drivhus + 0.5)
      {

	cout << "temp lidt varm\n";
	//OPEN WinDOW

	//    SysMsg* monmsg = new SysMsg;
	//    monmsg->msg_ = "Window åbnes";
	//    systemlog->send(1, monmsg);
              if(!windowON)
              {
	      uart->activateSensor("windowon");
	      usleep(100);
              windowON = true;
              }
              if(ventsON)
              {
	      uart->activateSensor("ventoff");
              usleep(100);
              ventsON = false;
              }
      }
    else if (temp_drivhus < avg_temp_drivhus - 0.0)
      {
	cout << "Der er for koldt i drivhuset\n";
	//heater on
	//close Window
	//vent off

	//    SysMsg* monmsg = new SysMsg;
	//    monmsg->msg_ = "heater tændes, vent slukkes, Window lukkes";
	//    systemlog->send(1, monmsg);
	if(use_heater)
	  {
            if(!heatON)
            {
	    uart->activateSensor("heaton");
	    usleep(100);
            heatON = true;
            }
	  }
	else
	  {

	    //        SysMsg* monmsg = new SysMsg;
	    //        monmsg->msg_ = "Heater kan ikke bruges";
	    //        systemlog->send(1, monmsg);
	  }
        if(ventsON)
        {
	uart->activateSensor("ventoff");
	usleep(100);
        ventsON = false;
        }

        if(windowON)
        {
	uart->activateSensor("windowoff");
	usleep(100);
        windowON = false;
        }

      }

    /* check waterstatus for plant 1-6*/

      if(drivhus_data.grund[0] < plant1.water)
      {


              if(drivhus_data.grund[0] != -99){
                  if(!water1ON){
                     uart->activateSensor("water1on");
                     water1ON = true;
                  }
              }
              else {
                  if(water1ON){
                  uart->activateSensor("water1off");
                  water1ON = false;
                  }

              }

      //plant1 need water
      } else
      {
          if(water1ON){
          uart->activateSensor("water1off");
          water1ON = false;
          }
      }

      if(drivhus_data.grund[1] < plant2.water)
      {


              if(drivhus_data.grund[1] != -99){
                  if(!water2ON){
                     uart->activateSensor("water2on");
                     water2ON = true;
                  }
              }
              else {
                  if(water2ON){
                  uart->activateSensor("water2off");
                  water2ON = false;
                  }

              }

      //plant2 need water
      } else
      {
          if(water2ON){
          uart->activateSensor("water2off");
          water2ON = false;
          }
      }

      if(drivhus_data.grund[2] < plant3.water)
      {


              if(drivhus_data.grund[2] != -99){
                  if(!water3ON){
                     uart->activateSensor("water3on");
                     water3ON = true;
                  }
              }
              else {
                  if(water3ON){
                  uart->activateSensor("water3off");
                  water3ON = false;
                  }

              }

      //plant1 need water
      } else
      {
          if(water3ON){
          uart->activateSensor("water3off");
          water3ON = false;
          }
      }
      if(drivhus_data.grund[3] < plant4.water)
      {


              if(drivhus_data.grund[3] != -99){
                  if(!water4ON){
                     uart->activateSensor("water4on");
                     water4ON = true;
                  }
              }
              else {
                  if(water4ON){
                  uart->activateSensor("water4off");
                  water4ON = false;
                  }

              }

      //plant1 need water
      } else
      {
          if(water4ON){
          uart->activateSensor("water4off");
          water4ON = false;
          }
      }
      if(drivhus_data.grund[4] < plant5.water)
      {


              if(drivhus_data.grund[4] != -99){
                  if(!water5ON){
                     uart->activateSensor("water5on");
                     water5ON = true;
                  }
              }
              else {
                  if(water5ON){
                  uart->activateSensor("water5off");
                  water5ON = false;
                  }

              }

      //plant1 need water
      } else
      {
          if(water5ON){
          uart->activateSensor("water5off");
          water5ON = false;
          }
      }

      if(drivhus_data.grund[5] < plant6.water)
      {


              if(drivhus_data.grund[5] != -99){
                  if(!water6ON){
                     uart->activateSensor("water6on");
                     water6ON = true;
                  }
              }
              else {
                  if(water6ON){
                  uart->activateSensor("water6off");
                  water6ON = false;
                  }

              }

      //plant1 need water
      } else
      {
          if(water6ON){
          uart->activateSensor("water6off");
          water6ON = false;
          }
      }

  }


  void loadData()
  {
    // go to indstillinger
    plant1 = settings->Getplant(1);
    plant2 = settings->Getplant(2);
    plant3 = settings->Getplant(3);
    plant4 = settings->Getplant(4);
    plant5 = settings->Getplant(5);
    plant6 = settings->Getplant(6);

    //loadplant = settings->GetPlant()
    //mangler funktionalitet til at hente plante

  }

 private:

  Plant plant1, plant2, plant3, plant4, plant5, plant6;

  UART * uart;
  Indstillinger * settings;
  MsgQueue * systemlog;
  DataLog * datalog;

  bool ventsON, windowON, heatON, water1ON, water2ON, water3ON, water4ON, water5ON, water6ON;

};

#endif
