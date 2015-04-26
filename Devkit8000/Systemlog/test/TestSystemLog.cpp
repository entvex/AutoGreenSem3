#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "stdio.h"
#include "MsgQueue.hpp"
#include "SystemLog.hpp"

using namespace std;

struct SystemMsg : public Message
{
  string msg; 
};
  
void *Sender(void *data)
{
  MsgQueue* mq = static_cast<MsgQueue*>(data);
   
  for(;;){

    SystemMsg * newMsg = new SystemMsg;
    newMsg->msg = "Monitor: Dårligt klima kl 12.00";
    mq->send(1, newMsg);

    sleep(1);
  }
}


void *Receiver(void *data)
{
  MsgQueue* mq = static_cast<MsgQueue*>(data);
  SystemLog syslog;

  for(;;){
    unsigned long id;
    SystemMsg* sysmsg = static_cast<SystemMsg*>(mq->receive(id));
    syslog.addMessage(sysmsg->msg);
    delete sysmsg;
    //syslog.printSystemLog();
  }
}


int main()
{
  MsgQueue mq(10);
 
  pthread_t sender_, receiver_;

  pthread_create(&sender_, NULL, Sender, (void *) &mq);
  pthread_create(&receiver_, NULL, Receiver, (void *) &mq);

  pthread_join(sender_, NULL);
  pthread_join(receiver_, NULL);

  return 0;
}
