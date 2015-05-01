
#include "rs232.h"
#include <iostream>
#include <string>
#include <string.h>
#include <SystemLog.h>
using namespace std;

struct SensorData
{
	int temp =0;
	int light =0;
	int humidity =0;
};


class UART
{
public:
	UART(SystemLog *Log)
	{
		systemlog = Log;
		cport_nr = 0;
		bdrate = 9600
	}

	void connect()
	{
		char mode[] = { '8', 'N', '1', 0 };
		while (RS232_OpenComport(cport_nr, bdrate, mode))
		{
			cout << "cannot connect to port number " << cport_nr << endl;
			cport_nr++;
		}
		cout << " connection made on port: " << cport_nr << endl;

	}




	int getSensor()
	{ 
		// later inplementation

	}
	
	void activateSensor(string command_)
	{
		if( command_ == "heaton")
		{
		senddata(command_);
		systemlog->addMessage("Heat Turned on");
		}	
		else if ( command_ == "heatoff")
		{
		senddata(command_);	
		systemlog->addMessage("Heat Turned off");
		}
		else if (command_ == "ventoff" )
		{
		senddata(command_);	
		systemlog->addMessage("Vent Turned off");
		}
		else if(command_ == "venton" )
		{
		senddata(command_);	
		systemlog->addMessage("Vent Turned on");
		}
		else if(command_ == "windowoff" )
		{
		senddata(command_);	
		systemlog->addMessage("Window Closed");
		}
		else if(command_ == "windowon")
		{
		senddata(command_);	
		systemlog->addMessage("Window Opened");
		}
	}

	SensorData getSensorData()
	{
		SensorData newdata;
		//void ændres til Sensordata
		while (newdata.temp <= 0)
		{
		
		senddata("temp");
		int data = recievedata();
		if (data != -1)
		{
		
			newdata.temp = (data/2)-20;
		}
		}
		while (newdata.humidity <= 0)
		{

			senddata("airhum");
			int data = recievedata();
			if (data != -2)
			{

				newdata.humidity = data;
			}
		}

		while (newdata.light <= 0)
		{

			senddata("light");
			int data = recievedata();
			if (data != -3)
			{

				newdata.light = data;
			}
		}



		return newdata;
	}

private:

	int cport_nr;
	int bdrate;
	unsigned char buf[2];
	SystemLog * systemlog;


	int recievedata()
	{

		while (1)
		{

			Sleep(1000);
			int n = RS232_PollComport(cport_nr, buf, 2);
			

			if (buf[0] == 'T')
			{

				return (int)buf[1];
			}
			else if (buf[0] == 'X' && buf[1] == 'T')
			{
				return -1;
			}
			else if (buf[0] == 'L')
			{

				return (int)buf[1];
			}
			else if (buf[0] == 'X' && buf[1] == 'L')
			{
				return -2;
			}
			else if (buf[0] == 'A')
			{

				return (int)buf[1];
			}
			else if (buf[0] == 'X' && buf[1] == 'A')
			{
				return -3;
			}

			cout << buf[0] << " " << buf[1] << endl;
		}
	}
	void senddata(string command_)
	{
		char command[2][5];
		//check
		if (command_ == "temp")
			strcpy(command[1], "T");
		else if (command_ == "light")
			strcpy(command[1], "L");
		else if (command_ == "airhum")
			strcpy(command[1], "A");
		else if (command_ == "ground1")
			strcpy(command[1], "S1");
		else if (command_ == "ground2")
			strcpy(command[1], "S2");
		else if (command_ == "ground3")
			strcpy(command[1], "S3");
		else if (command_ == "ground4")
			strcpy(command[1], "S4");
		else if (command_ == "ground5")
			strcpy(command[1], "S5");
		else if (command_ == "ground6")
			strcpy(command[1], "S6");
		else if (command_ == "heaton")
			strcpy(command[1], "H");
		else if (command_ == "heatoff")
			strcpy(command[1], "K");
		else if (command_ == "windowon")
			strcpy(command[1], "W1");
		else if (command_ == "windowoff")
			strcpy(command[1], "W0");
		else if (command_ == "venton")
			strcpy(command[1], "V1");
		else if (command_ == "ventoff")
			strcpy(command[1], "V0");


		RS232_cputs(cport_nr, command[1]);
		cout << command[1] << endl;
	}
};

