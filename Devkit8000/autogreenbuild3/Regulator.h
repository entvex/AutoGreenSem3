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
    }

  ~Regulator()
    {

    }

  void run()
  {
    //run is running at all times
    while(1) {
      if(!settings->getRegulering())
	{
	  //   cout << "regulator is not active\n";
	  usleep(100000);
	}
      else
	{
          cout << "regulator is active\n";
	  //load data into plants from Settings (indstillinger)
	  loadData();
	  SensorData loadeddata = datalog->GetNewestData();
	  ControlData(loadeddata);

	  //linux
	  usleep(100000);
	}
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

	uart->activateSensor("ventoff");
	usleep(100);
	uart->activateSensor("heatoff");
	usleep(100);
	uart->activateSensor("windowoff");
	usleep(100);


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
	    uart->activateSensor("venton");
	    usleep(100);
	  }
	else
	  {
	    //        SysMsg* monmsg = new SysMsg;
	    //        monmsg->msg_ = "vent kan ikke åbnes";
	    //        systemlog->send(1, monmsg);
	  }
	//open window
	uart->activateSensor("windowon");
	usleep(100);
      }
    else if (temp_drivhus >= avg_temp_drivhus + 0.5)
      {

	cout << "temp lidt varm\n";
	//OPEN WinDOW

	//    SysMsg* monmsg = new SysMsg;
	//    monmsg->msg_ = "Window åbnes";
	//    systemlog->send(1, monmsg);
	      uart->activateSensor("windowon");
	      usleep(100);
	      uart->activateSensor("ventoff");
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
	    uart->activateSensor("heaton");
	    usleep(100);
	  }
	else
	  {

	    //        SysMsg* monmsg = new SysMsg;
	    //        monmsg->msg_ = "Heater kan ikke bruges";
	    //        systemlog->send(1, monmsg);
	  }

	uart->activateSensor("ventoff");
	usleep(100);
	uart->activateSensor("windowoff");
	usleep(100);

      }

    /* check waterstatus for plant 1-6*/
    /*
      if(drivhus_data.grund[0] < plant1.water)
      {

      //    SysMsg* monmsg = new SysMsg;
      //    monmsg->msg_ = "Plante 1 mangler vand";
      //    systemlog->send(1, monmsg);
      //uart->activateSensor("water1");
      //plant1 need water
      }
      if(drivhus_data.grund[1] < plant2.water)
      {
      SysMsg* monmsg = new SysMsg;
      monmsg->msg_ = "Plante 2 mangler vand";
      systemlog->send(1, monmsg);
      //uart->activateSensor("water1");
      //plant1 need water
      }
      if(drivhus_data.grund[2] < plant3.water)
      {
      //    SysMsg* monmsg = new SysMsg;
      //    monmsg->msg_ = "Plante 3 mangler vand";
      //    systemlog->send(1, monmsg);
      //uart->activateSensor("water1");
      //plant1 need water
      }
      if(drivhus_data.grund[3] < plant4.water)
      {
      //    SysMsg* monmsg = new SysMsg;
      //    monmsg->msg_ = "Plante 4 mangler vand";
      //    systemlog->send(1, monmsg);
      //uart->activateSensor("water1");
      //plant1 need water
      }
      if(drivhus_data.grund[4] < plant5.water)
      {
      //    SysMsg* monmsg = new SysMsg;
      //    monmsg->msg_ = "Plante 5 mangler vand";
      //    systemlog->send(1, monmsg);
      //uart->activateSensor("water1");
      //plant1 need water
      }
      if(drivhus_data.grund[5] < plant6.water)
      {
      //    SysMsg* monmsg = new SysMsg;
      //    monmsg->msg_ = "Plante 6 mangler vand";
      //    systemlog->send(1, monmsg);
      //uart->activateSensor("water1");
      //plant1 need water
      }
      //added later if needed
      */


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

};

