#ifndef SYSTEMLOG_HPP_
#define SYSTEMLOG_HPP_

#include <iostream>
#include <vector>

using namespace std;

class SystemLog
{
public:
  SystemLog(){
  }

  void addMessage(string msg)
  {
    system_.push_back(msg);
  }

  void printSystemLog()
  {
    for(int i = 0; i < 6; i++)
      {
	cout << system_[system_.size() - i] << endl;
      }
  }
 
  ~SystemLog(){
  }

private:
  vector<string> system_;
};

#endif
