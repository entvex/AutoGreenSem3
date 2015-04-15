
#include "rs232.h"
#include <iostream>
#include <string>
#include <string.h>
using namespace std;


class UART
{
public:
	UART()
	{
		
	}

	void connect()
	{
		while (RS232_OpenComport(cport_nr, bdrate, mode))
		{
			cout << "cannot connect to port number " << cport_nr;
			cport_nr++;
		}

	}
	



	int getSensor()
	{
		senddata("GD");
		recievedata();
		if (1 == 1)
			return 6;

	}

	void getSensorData()
	{
		//void ændres til Sensordata
		senddata("TEMP");
		recievedata();
		senddata("HUM");
		recievedata();
		senddata("LIGHT");
		recievedata();
		senddata("GND1");
		recievedata();
		senddata("GND2");
		recievedata();

	}

private:

	int cport_nr = 0;
	int bdrate = 9600;
	char mode[] = { '8', 'N', '1', 0 };
	unsigned char buf[5];


	bool recievedata()
	{

		while (1)
		{


			int n = RS232_PollComport(cport_nr, buf, 1);

			if (buf[0] == 'Tx')
			{
				return 0;
			}
			else if (buf[0] == 'Lx')
			{
				return 1;
			}


		
		}
	}
	void senddata(string command_)
	{
		char command[2][5];
		//check
		if (command_ == "temp")
			strcpy(command[1], "T");
		else if(command_ == "light")
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
		else if (command_ == "window")
			strcpy(command[1], "W");
		else if (command_ == "vent)
			strcpy(command[1], "V");


		RS232_cputs(cport_nr, command[1]);
		cout << command[1] << endl;
	}
};

