/*
 * DataLog_list.hpp
 *
 *  Created on: Apr 13, 2015
 *      Author: stud
 */

#ifndef DATALOG_LIST_HPP_
#define DATALOG_LIST_HPP_

#include "DoublyLinkedList.hpp"

struct SensorData
{
	int temp;
	int light;
	int humidity;
};

class DataLog_list : public DoublyLinkedList<SensorData>
{
public:

	void test()
	{

	}

	virtual int Find(SensorData valueToFind) override;
	{

	}

private:
};




#endif /* DATALOG_LIST_HPP_ */
