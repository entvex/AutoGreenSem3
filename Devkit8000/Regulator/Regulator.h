
#include <iostream>
//include others
#include "Sensordata.h"
#include "Plant.h"
#include "UART.h"
#include "SystemLog.h"
#include "Indstillinger.h"


using namespace std;




class Regulator
{
public:
	Regulator(UART * uart_, Indstillinger * settings_, SystemLog *systemlog_, DataLog *datalog_)																															)
	{
		
		//* set pointers
		uart = uart_;
		settings = settings_;
		systemlog = systemlog_;
		datalog = datalag_;
		
		tempHigh = false;
		tempLow = false;
		humidityHigh = false;
		humidityLow = false;
		plante1water = false;
		plante2water = false;
		plante3water = false;
		plante4water = false;
		plante5water = false;
		plante6water = false;


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
		Sensordata loadeddata = datalog->GetNewestData();
		ControlData(plant1,loadeddata);


		//linux
		//usleep(6000000);
	}

	void ControlData(plant control_plant, Sensordata drivhus_data)
	{
		if(!indstillinger->GetRegulering())
		{
			usleep(5000);
			
			return;
		}
		/*lets make some control checks*/
		
		/*Get newestSensorData*/
		double temp_drivhus = 0;// settings->get_temp();

		/* Compare average temperature for plants to Actual temps*/
		double avg_temp_drivhus = (plant1.temp + plant2.temp + plant3.temp + plant4.temp + plant5.temp + plant6.temp) / 6;

		bool use_heater = false; 
		bool use_vents = false; 
		indstillinger->GetHardware(use_heater,use_vent);

		if (temp_drivhus == avg_temp_drivhus || (temp_drivhus - 1) == avg_temp_drivhus || (temp_drivhus + 1) == avg_temp_drivhus)
		{
			//temp is OK, close and shut everything off
			uart->activateSensor("windowoff");
			usleep(100);
			uart->activateSensor("ventoff");
			usleep(100);
			uart->activateSensor("heatoff");
			usleep(100);
			
		}
		else if (temp_drivhus > avg_temp_drivhus && (temp_drivhus + 3) < (avg_temp_drivhus))
		{
			//OPEN WinDOW
			uart->activateSensor("windowon");
			usleep(100);
		}
		else if ((temp_drivhus - 6) > avg_temp_drivhus)
		{
			//open window
			uart->activateSensor("windowon");
			usleep(100);
			//start vent
			uart->activateSensor("Venton");
			usleep(100);
		}
		else if ((temp_drivhus + 2) < avg_temp_drivhus)
		{
			//heater on
			//close Window
			//vent off
			uart->activateSensor("heaton");
			usleep(100);
			uart->activateSensor("windowoff");
			usleep(100);
			uart->activateSensor("ventoff");
			usleep(100);
			
		}
																																													

		/* check waterstatus for plant 1-6*/

			//added later if needed



	}

	void loadData(plant loadplant)
	{
		// go to indstillinger
		
		//mangler funktionalitet til at hente plante
		loadplant.light = 0;
		loadplant.temp = 0;
		loadplant.water = 0;
		


	}

private:


//scrap these bools ?
	bool tempHigh;
	bool tempLow;
	bool humidityHigh;
	bool humidityLow;
	bool plante1water;
	bool plante2water;
	bool plante3water;
	bool plante4water;
	bool plante5water;
	bool plante6water;

	plant plant1;
	plant plant2;
	plant plant3;
	plant plant4;
	plant plant5;
	plant plant6;

	UART * uart;
	Indstillinger * settings;
	SystemLog * systemlog;
	DataLog * datalog;

};

