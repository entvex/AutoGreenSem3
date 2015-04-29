/*
 * testDatalog.hpp
 *
 *  Created on: Apr 29, 2015
 *      Author: stud
 */

#ifndef TESTDATALOG_HPP_
#define TESTDATALOG_HPP_


#include <iostream>

using namespace std;

void testDatalog()
{
	DataLog datalog;

	SensorData data;

	data.humidity = 59;
	data.temp = 69;

	datalog.InsertSensorData(data);

	data.humidity = 66;
	data.temp = 66;

	datalog.InsertSensorData(data);

	SensorData datanew;

	datanew = datalog.GetNewestData();

	cout << "Datalog h: " << data.humidity << " t: " << data.temp << endl;
}



#endif /* TESTDATALOG_HPP_ */
