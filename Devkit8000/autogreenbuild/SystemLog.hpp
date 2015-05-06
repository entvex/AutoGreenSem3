#ifndef SYSTEMLOG_HPP_
#define SYSTEMLOG_HPP_

#include <iostream>
#include "DoublyLinkedList.hpp"

using namespace std;

class SystemLog
{
public:
  SystemLog(){
  }

  void addMessage(string msg)
  {
    syslog.headInsert(msg);
  }

  string printSystemLog()
  {
    string out;
    syslog.PeekHead(out);
    return out;
  }
 
  ~SystemLog(){
  }

private:
  DoublyLinkedList<string> syslog;
};

#endif
