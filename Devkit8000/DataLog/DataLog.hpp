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

	void Getdata(int &time,int &temp,int &light,int &humidity, int &grund )
	{

	}

	void InsertSensorData(const SensorData &SensorData)
	{
		list.headInsert(SensorData);
		list.forwardTraversing();
	}

void GetNewestData(int &time,int &temp,int &light,int &humidity )
{

}

void SortDay()
{

}

void SortWeek()
{

}

void SortMonth()
{

}

};




#endif /* DATALOG_HPP_ */
