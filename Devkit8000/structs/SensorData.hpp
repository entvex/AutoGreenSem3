/*
 * SensorData.hpp
 *
 *  Created on: Apr 14, 2015
 *      Author: stud
 */

#pragma once

#include "DateStruct.hpp"


struct SensorData
{
	Date time;
	int temp;
	int light;
	int humidity;
	int grund[6];
};
