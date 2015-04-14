/*
 * Indstillinger.hpp
 *
 *  Created on: Apr 14, 2015
 *      Author: dje
 */

#include "DateStruct.hpp"
#include "Plant.hpp"

using namespace std;

class Indstillinger {
	public:

	void SetMonitorering(bool active)
	{
		this->monitor = active;
	}

	void SetRegulering(bool active)
	{
		this->regulering = active;
	}

	void SetVirtualPlant(int id, Plant plantToPlace)
	{

	}

	void DelVirtualPlant(int id)
	{

	}

	void GetEmails(string &mail1, string &mail2, string &mail3)
	{

	}

	void SetEmails(const string mail1, const string mail2, const string mail3)
	{

	}

	void GetHardware(bool &Varmelegeme, bool &blæserne)
	{

	}

	void SetHardware(const bool Varmelegeme, const bool blæserne)
	{
		this->Varmelegeme = Varmelegeme;
		this->blæserne = blæserne;
	}

	void SetDateTime(Date time)
	{

	}

	void GetNotifications(bool &daily, bool &Warning)
	{

	}

	void SetNotifications(const bool &daily, const bool &Warning)
	{

	}

	void GetData(int &temp, int &humidity, int &plant[1..6])
	{

	}


private:

		Plant virtuallePlants; //TODO added 6 array
		string E_mails;			//TODO added 3 array
		bool Warning;
		bool daily;
		bool Varmelegeme;
		bool blæserne;
		bool monitor;
		bool regulering;
};


