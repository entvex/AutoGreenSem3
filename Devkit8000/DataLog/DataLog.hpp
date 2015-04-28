/*
 * DataLog.hpp
 *
 *  Created on: Apr 13, 2015
 *      Author: stud
 */

#ifndef DATALOG_HPP_
#define DATALOG_HPP_

#include "DataLog_list.hpp"


class DataLog
{
private:

DataLog_list list;

public:

	vector<SensorData> GetAll()
	{
		return list.GetAll();
	}

	void InsertSensorData(const SensorData &SensorData)
	{
		list.headInsert(SensorData);
		list.forwardTraversing();
	}

SensorData GetNewestData()
{

}

//Not implemented.
void SortDay()
{
	throw;
}

void SortWeek()
{
	throw;
}

void SortMonth()
{
	throw;
}

};


#endif /* DATALOG_HPP_ */
