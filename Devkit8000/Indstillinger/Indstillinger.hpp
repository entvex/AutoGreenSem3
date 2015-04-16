/*
 * Indstillinger.hpp
 *
 *  Created on: Apr 14, 2015
 *      Author: dje
 */

#include "DateStruct.hpp"
#include "Plant.hpp"
#include <string>

using namespace std;

class Indstillinger {
	public:

		Indstillinger()
		{
			Warning = false;
			daily = false;
			Varmelegeme = false;
			blæserne = false;
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

	void GetHardware(bool &Varmelegeme, bool &blæserne)
	{
		Varmelegeme = this->Varmelegeme;
		blæserne = this->blæserne;
	}

	void SetHardware(const bool Varmelegeme, const bool blæserne)
	{
		this->Varmelegeme = Varmelegeme;
		this->blæserne = blæserne;
	}

	void SetDateTime(Date time)
	{
		//TODO time class
	}

	void GetNotifications(bool &daily, bool &Warning)
	{
		daily = this->daily;
		Warning = this->Warning;
	}

	void SetNotifications(const bool &daily, const bool &Warning)
	{
		this->Varmelegeme = Varmelegeme;
		this->blæserne = blæserne;
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
		bool blæserne;
		bool monitor;
		bool regulering;
};