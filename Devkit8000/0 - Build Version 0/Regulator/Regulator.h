
#include <iostream>
//#include <unistd.h>
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

		//load data into plants from Settings (indstillinger)
		loadData(plant1);
		loadData(plant2);
		loadData(plant3);
		loadData(plant4);
		loadData(plant5);
		loadData(plant6);
		SensorData loadeddata = datalog->GetNewestData();
		ControlData(plant1,loadeddata);


		//linux
		//usleep(6000000);
	}

	void ControlData(Plant control_plant, SensorData drivhus_data)
	{
		if(!settings->GetRegulering())
		{
			//usleep(5000);
			
			return;
		}
		/*lets make some control checks*/
		
		/*Get newestSensorData*/
		double temp_drivhus = 0;// settings->get_temp();

		/* Compare average temperature for plants to Actual temps*/
		double avg_temp_drivhus = (plant1.temp + plant2.temp + plant3.temp + plant4.temp + plant5.temp + plant6.temp) / 6;

		bool use_heater = false; 
		bool use_vents = false; 
		settings->GetHardware(use_heater,use_vents);

		if (temp_drivhus == avg_temp_drivhus || (temp_drivhus - 1) == avg_temp_drivhus || (temp_drivhus + 1) == avg_temp_drivhus)
		{
			//temp is OK, close and shut everything off

			uart->activateSensor("ventoff");
			//usleep(100);
			uart->activateSensor("heatoff");
			//usleep(100);
			uart->activateSensor("windowoff");
			//usleep(100);			
		}
		else if (temp_drivhus > avg_temp_drivhus && (temp_drivhus + 3) < (avg_temp_drivhus))
		{
			//OPEN WinDOW
			uart->activateSensor("windowon");
			//usleep(100);
		}
		else if ((temp_drivhus - 6) > avg_temp_drivhus)
		{
			//open window
			uart->activateSensor("windowon");
			//usleep(100);
			//start vent
			uart->activateSensor("Venton");
			//usleep(100);
		}
		else if ((temp_drivhus + 2) < avg_temp_drivhus)
		{
			//heater on
			//close Window
			//vent off
			uart->activateSensor("heaton");
			//usleep(100);
			uart->activateSensor("windowoff");
			//usleep(100);
			uart->activateSensor("ventoff");
			//usleep(100);
			
		}
																																													

		/* check waterstatus for plant 1-6*/

			//added later if needed



	}

	void loadData(Plant loadplant)
	{
		// go to indstillinger
		
		//mangler funktionalitet til at hente plante
		
		


	}

private:




	Plant plant1;
	Plant plant2;
	Plant plant3;
	Plant plant4;
	Plant plant5;
	Plant plant6;

	UART * uart;
	Indstillinger * settings;
	SystemLog * systemlog;
	DataLog * datalog;

};

