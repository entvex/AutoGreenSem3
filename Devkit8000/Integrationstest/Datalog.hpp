#ifndef DATALOG_HPP_
#define DATALOG_HPP_

#include <iostream>

using namespace std;

class Datalog
{
public:
  Datalog(){
  }

  void insertSensorData(Sen data)
  {
    cout << "Datalog: Inserting sensor data: "<< data << endl;
  }
 
  ~Datalog(){
  }

private:
  int sensordata_;
};

#endif
