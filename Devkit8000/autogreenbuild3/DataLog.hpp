/*
 * DataLog.hpp
 *
 *  Created on: Apr 13, 2015
 *      Author: stud
 */

#ifndef DATALOG_HPP_
#define DATALOG_HPP_

#include "DoublyLinkedList.hpp"
#include "SensorData.hpp"

class DataLog
{
private:

  DoublyLinkedList<SensorData> list;

public:

  void InsertSensorData(SensorData SensorData)
  {
    list.headInsert(SensorData);
  }

  SensorData GetNewestData()
  {
    SensorData dataToReturn;
    list.PeekHead(dataToReturn);
    return dataToReturn;
  }

  //Not implemented because they are part of later req.
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

// std::ostream& operator<<(std::ostream& os, const SensorData& sensorData)
// {
//   os << sensorData.humidity << " " << sensorData.light << ", " << sensorData.temp;
// 
//   return os;
// }

// bool operator== (SensorData &sData, SensorData &sData2)
// {
//   return (sData.humidity == sData2.humidity &&
// 	  sData.light == sData2.light &&
// 	  sData.temp == sData2.temp);
// }

#endif /* DATALOG_HPP_ */
