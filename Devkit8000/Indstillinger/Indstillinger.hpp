/*
 * Indstillinger.hpp
 *
 *  Created on: Apr 14, 2015
 *      Author: dje
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <sys/time.h>
#include "DateStruct.hpp"
#include "Plant.hpp"


using namespace std;

class Indstillinger {
	public:

		Indstillinger()
		{
			Warning = false;
			daily = false;
			Varmelegeme = false;
			bloeserne = false;
			monitor = false;
			regulering = false;
		}

	void SetMonitorering(bool active)
	{
		this->monitor = active;
	}

	void SetRegulering(bool active)
	{
		this->regulering = active;
	}

	//id mellem 1 og 6
	//Plant plantToPlace
	void SetVirtualPlant(int id, Plant plantToPlace)
	{
		if (id > 0 && id < 7)
		{
			this->virtuallePlants[id - 1] = plantToPlace;
			this->virtuallePlants[id - 1].Enable = true;
		}
	}

	void DelVirtualPlant(int id)
	{
		if (id > 0 && id < 7)
		{
			this->virtuallePlants[id - 1].Enable = false;
		}
	}

	void GetEmails(string &mail1, string &mail2, string &mail3)
	{
		mail1 = E_mails[0];
		mail2 = E_mails[1];
		mail3 = E_mails[2];
	}

	void SetEmails(const string mail1, const string mail2, const string mail3)
	{
		this->E_mails[0] = mail1;
		this->E_mails[1] = mail2;
		this->E_mails[2] = mail3;
	}

	void GetHardware(bool &Varmelegeme, bool &bloeserne)
	{
		Varmelegeme = this->Varmelegeme;
		bloeserne = this->bloeserne;
	}

	void SetHardware(const bool Varmelegeme, const bool bloeserne)
	{
		this->Varmelegeme = Varmelegeme;
		this->bloeserne = bloeserne;
	}

	//Note This code is Devkit8000 specific and needs root access to run.
	void setDate(Date time)
	{
		string prepCommand;
		std::string pwd = exec("pwd"); // get current path

		//looks for the return char and removes it
		if (!pwd.empty() && pwd[pwd.length()-1] == '\n') {
		    pwd.erase(pwd.length()-1);
		}
		//concatenate string.
		prepCommand += pwd + string("/setTimeBeagleBoard.sh ") + string(time.Year) + string(" ");
//				string(time.Month) + string(" ") + string(time.Day) + string(" ") + string(time.Hour) +
//				string(" ") + string(time.Min);

		cout << prepCommand << endl; //Debug
		const char * command = prepCommand.c_str();
		std::string res = exec(command);
		cout << res << endl; //Debug
	}


	Date getDate()
	{
		  time_t mytime = time(0);
		  struct tm* tm_ptr = localtime(&mytime);
		  struct Date date;
		  if (tm_ptr)
		  {

			  date.Min = tm_ptr->tm_min;
			  date.Hour = tm_ptr->tm_hour;
			  date.Day = tm_ptr->tm_mday;
			  date.Month = tm_ptr->tm_mon+1;
		      date.Year = tm_ptr->tm_year+1900;
		      return date;
		  }
		  return date;
	}

	void GetNotifications(bool &daily, bool &Warning)
	{
		daily = this->daily;
		Warning = this->Warning;
	}

	void SetNotifications(const bool &daily, const bool &Warning)
	{
		this->Varmelegeme = Varmelegeme;
		this->bloeserne = bloeserne;
	}

	// returns 1 If the selected plant is active
	// returns -1 If the selected plant is not active and the ref is edited.
	int GetData(int plantId, Plant &plantToedit)
	{
		if (plantId > 0 && plantId < 7)
		{
			if ( this->virtuallePlants[plantId - 1].Enable == true )
			{
				plantToedit = virtuallePlants[plantId - 1];
				return 1;
			}
		}
		return -1;
	}


private:
		Plant virtuallePlants[6]; 
		string E_mails[3];        
		bool Warning;
		bool daily;
		bool Varmelegeme;
		bool bloeserne;
		bool monitor;
		bool regulering;

		string exec(const char* cmd) {
			//Make a linux shell with read
		    FILE* pipe = popen(cmd, "r");
		    if (!pipe) return "ERROR"; //Check if i got pipe
		    char buffer[128];
		    string result = "";
		    while(!feof(pipe)) { //While output read it.
		    	if(fgets(buffer, 128, pipe) != NULL)
		    		result += buffer;
		    }
		    pclose(pipe); //Close the shell
		    return result;
		}
};
