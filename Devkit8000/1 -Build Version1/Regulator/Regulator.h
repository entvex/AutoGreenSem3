
#include <iostream>
#include <unistd.h>
//include others
#include "Sensordata.hpp"
#include "Plant.hpp"
#include "UART.h"
#include "SystemLog.hpp"
#include "Indstillinger.hpp"


using namespace std;




class Regulator
{
public:
	Regulator(UART * uart_, Indstillinger * settings_, SystemLog *systemlog_, DataLog *datalog_)																															
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
	if(!settings->GetRegulering())
		{
			usleep(600000);	
		}
		else 
		{
		//load data into plants from Settings (indstillinger)
		loadData();
		SensorData loadeddata = datalog->GetNewestData();
		ControlData(loadeddata);


		//linux
		usleep(600000);
		}
	}
	}

	void ControlData( SensorData drivhus_data)
	{
	
		/*lets make some control checks*/
		
		/*Get newestSensorData*/
	
		double temp_drivhus = drivhus_data.temp;

		/* Compare average temperature for plants to Actual temps*/
		double avg_temp_drivhus = (plant1.temp + plant2.temp + plant3.temp + plant4.temp + plant5.temp + plant6.temp) / 6;

		bool use_heater = false; 
		bool use_vents = false; 
		settings->GetHardware(use_heater,use_vents);

		if (temp_drivhus == avg_temp_drivhus || (temp_drivhus - 1) == avg_temp_drivhus || (temp_drivhus + 1) == avg_temp_drivhus)
		{
			//temp is OK, close and shut everything off
			systemlog->addMessage("slukker alle aktuatorer");
			uart->activateSensor("ventoff");
			usleep(100);
			uart->activateSensor("heatoff");
			usleep(100);
			uart->activateSensor("windowoff");
			usleep(100);
	
		}
		else if (temp_drivhus > avg_temp_drivhus && (temp_drivhus + 3) < (avg_temp_drivhus))
		{
			//OPEN WinDOW
			systemlog->addMessage("Window åbnes");
			uart->activateSensor("windowon");
			usleep(100);
		}
		else if ((temp_drivhus - 6) > avg_temp_drivhus)
		{
			systemlog->addMessage("vent tændes, window åbnes");
			//start vent
			if(use_vents)
				{
				uart->activateSensor("venton");
				usleep(100);
				}
	//open window
			uart->activateSensor("windowon");
			usleep(100);
		}
		else if ((temp_drivhus + 2) < avg_temp_drivhus)
		{
			//heater on
			//close Window
			//vent off
			systemlog->addMessage(" heater tændes, vent slukkes, Window lukkes");
			if(use_heater)
				{
				uart->activateSensor("heaton");
				usleep(100);
				}
			uart->activateSensor("ventoff");
			usleep(100);
			uart->activateSensor("windowoff");
			usleep(100);
			
		}
	

		/* check waterstatus for plant 1-6*/

			if(drivhus_data.grund[1] < plant1.water)
			{
				//uart->activateSensor("water1");
				//plant1 need water
			}
			if(drivhus_data.grund[2] < plant2.water)
			{
				//uart->activateSensor("water1");
				//plant1 need water
			}
			if(drivhus_data.grund[3] < plant3.water)
			{
				//uart->activateSensor("water1");
				//plant1 need water
			}
			if(drivhus_data.grund[4] < plant4.water)
			{
				//uart->activateSensor("water1");
				//plant1 need water
			}
			if(drivhus_data.grund[5] < plant5.water)
			{
				//uart->activateSensor("water1");
				//plant1 need water
			}
			if(drivhus_data.grund[6] < plant6.water)
			{
				//uart->activateSensor("water1");
				//plant1 need water
			}
			//added later if needed



	}

	void loadData()
	{
		// go to indstillinger
		plant1 = settings->getPlant(1);
		plant2 = settings->getPlant(2);
		plant3 = settings->getPlant(3);
		plant4 = settings->getPlant(4);
		plant5 = settings->getPlant(5);
		plant6 = settings->getPlant(6);

		//loadplant = settings->GetPlant()
		//mangler funktionalitet til at hente plante
		
		


	}

private:




	Plant plant1, plant2, plant3, plant4, plant5, plant6;


	UART * uart;
	Indstillinger * settings;
	SystemLog * systemlog;
	DataLog * datalog;

};

