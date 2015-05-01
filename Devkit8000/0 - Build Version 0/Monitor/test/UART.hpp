#ifndef UART_HPP_
#define UART_HPP_

#include <iostream>

using namespace std;

class UART
{
public:
  UART(){
  }

  void scanForSensors()
  {
    cout << "UART: Scanning for sensors" << endl;
  }

  int getSensorData()
  {
    sensordata_ = 4;
    return sensordata_;
  }
 
  ~UART(){
  }

private:
  int sensordata_;
};

#endif
