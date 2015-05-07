#ifndef SYSTEMLOG_HPP_
#define SYSTEMLOG_HPP_

#include <iostream>
#include "MsgQueue.hpp"
#include "SysMsg.hpp"
#include "DoublyLinkedList.hpp"

using namespace std;

class SystemLog
{
public:
  SystemLog(MsgQueue &msgs){
    msgs_ = &msgs;
  }

  void checkMsg(){
    while(true){
      unsigned long id;
      SysMsg* logentry = static_cast<SysMsg*>(msgs_->receive(id));
      addMessage(logentry->msg_);
      delete logentry;
      usleep(10000000);
    }
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
  MsgQueue* msgs_;
};

#endif
