#ifndef UART_H_
#define UART_H_

#include "rs232.h"
#include "SensorData.hpp"
#include <iostream>
#include <string>
#include <string.h>
#include "MsgQueue.hpp"
#include "SysMsg.hpp"

using namespace std;

class UART
{
 public:
  UART(MsgQueue* log)
    {
      systemlog = log;
      cport_nr = 0;
      bdrate = 9600;
      mtx = PTHREAD_MUTEX_INITIALIZER;
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
    return 0;
  }
	
  void activateSensor(string command_)
  {
    pthread_mutex_lock(&mtx);

    if( command_ == "heaton")
      {
	senddata(command_);
	addMessage("Heat Turned on");
      }	
    else if ( command_ == "heatoff")
      {
	senddata(command_);	
	addMessage("Heat Turned off");
      }
    else if (command_ == "ventoff" )
      {
	senddata(command_);	
	addMessage("Vent Turned off");
      }
    else if(command_ == "venton" )
      {
	senddata(command_);	
	addMessage("Vent Turned on");
      }
    else if(command_ == "windowoff" )
      {
	senddata(command_);	
	addMessage("Window Closed");
      }
    else if(command_ == "windowon")
      {
	senddata(command_);	
	addMessage("Window Opened");
      }
      usleep(10000);
    
	int response = recievedata();
	if(response == 999)
	{
	 //response OK	
	}
	else{
		int count;
		for(count = 0; count < 2; count ++)
		{
			senddata(command_);	
			response = recievedata();
			if(response == 999)
				break;
		}		
		
	}
    pthread_mutex_unlock(&mtx);
  }

  SensorData getSensorData()
  {
    pthread_mutex_lock(&mtx);
    SensorData newdata;
    //void ændres til Sensordata
    
 
		
	senddata("temp");
	int data = recievedata();
	cout << data << endl;
	if (data != -99)
	  {
		
	    newdata.temp = (double(data)/2)-20;
	  }
	  else
	  {
	    newdata.temp = -99;
	  }
	  
     
   
    senddata("ground1");
    data = recievedata();
    if(data != -99)
      {
	newdata.grund[0] = data;
      }	
     else {
       newdata.grund[0] = -99;
     }
	  
	  	  
    senddata("ground2");
    data = recievedata();
    if(data != -99)
      {
	newdata.grund[1] = data;
      }
      else {
       newdata.grund[1] = -99;
     }
	  
	  	  
    senddata("ground3");
    data = recievedata();
    if(data != -99)
      {
	newdata.grund[2] = data;
      }		
      else {
       newdata.grund[2] = -99;
     }
	  
	  	  
    senddata("ground4");
    data = recievedata();
    if(data != -99)
      {
	newdata.grund[3] = data;
      }		
      else {
       newdata.grund[3] = -99;
     }
	  
	  	  
    senddata("ground5");
    data = recievedata();
    if(data != -99)
      {
	newdata.grund[4] = data;
      }		
      else {
       newdata.grund[4] = -99;
     }
	  
    senddata("ground6");
    data = recievedata();
    if(data != -99)
      {
	newdata.grund[5] = data;
      }	
      else {
       newdata.grund[5] = -99;
     }

    pthread_mutex_unlock(&mtx);
    
    
//    cout << "////////sensordata////////" << endl;
//    cout << newdata.temp << endl;
//    cout << newdata.grund[0] << " " << newdata.grund[1] << " " << newdata.grund[2] << " " <<
//    newdata.grund[3] << " " << newdata.grund[4] << " " << newdata.grund[5] << endl;
//    cout << " ///////sensordata-end//////" << endl;
    return newdata;
  }



  void addMessage(string m)
  {
    //    SysMsg* uartmsg = new SysMsg;
    //    uartmsg->msg_ = m;
    //    systemlog->send(1, uartmsg);
  }

  int recievedata()
  {
int testcount;
//nødvendigt?? nej, men spurgte om jeg skulle lave det eller ej, og fik et ja, så her er det.
    for(testcount = 0; testcount <=10; testcount++)
      {
	buf[0] = 0; buf[1] = 0; buf[2] = 0;
	usleep(250000);
	RS232_PollComport(cport_nr, buf, 4);
	
	cout << buf[0] << " " << buf[1] << buf[2] <<  endl;

	if (buf[0] == 'T')
	  {

	    return (int)buf[1];
	  }
	else if (buf[0] == 'X' && buf[1] == 'T')
	  {
	    return -99;
	  }
	else if (buf[0] == 'L')
	  {

	    return (int)buf[1];
	  }
	else if (buf[0] == 'X' && buf[1] == 'L')
	  {
	    return -99;
	  }
	else if (buf[0] == 'A')
	  {
	    return (int)buf[1];
	  }
	else if (buf[0] == 'X' && buf[1] == 'A')
	  {
	    return -99;
	  }
	else if (buf[0] == 'X' && buf[1] == 'S')
	  {
	    return -99;
	  }
	else if (buf[0] == 'S')
	  {
	    return (int)buf[2];
	  }
	else if (buf[0] == 'H' || buf[0] == 'K' || buf[0] == 'W' || buf[0] == 'V')
	  {
	    return  999;
	  }
	  else if (buf[0] == 'X' && buf[1] == 'V')
	  {
		  //cout << "fejl ved vent\n";
		  return -99;
	  }
	  else if (buf[0] == 'X' && buf[1] == 'W')
	  {
		  return -99;
	  }
	  else if (buf[0] == 'X' && buf[1] == 'K')
	  {
		  //cout << "fejl ved heater\n";
		  return -99;
		  
	  }
	  	  else if (buf[0] == 'X' && buf[1] == 'H')
	  {
		  //cout << "fejl ved heater\n";
		  return -99;
	  }
	  

	
      }
      return -99;
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
    //cout << command[1] << endl;
  }
  
 private:

  int cport_nr;
  int bdrate;
  unsigned char buf[4];
  MsgQueue * systemlog;
  pthread_mutex_t mtx;
};

#endif
