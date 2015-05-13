#ifndef MSGQUEUE_HPP_
#define MSGQUEUE_HPP_

#include <queue>
#include <cstddef>
#include "pthread.h"
#include "Message.hpp"

using namespace std;

struct Item
{
  unsigned long id_;
  Message* msg_;
};

class MsgQueue
{
public:
  MsgQueue(unsigned long maxSize){
    size_ = maxSize;
    condi = PTHREAD_COND_INITIALIZER;
    mtx = PTHREAD_MUTEX_INITIALIZER;
  }
  void send(unsigned long id, Message* msg = NULL){
    
    pthread_mutex_lock(&mtx);
    
    Item newItem;
    
    newItem.id_ = id;
    newItem.msg_ = msg;
    while(itemQueue_.size() >= size_)
      pthread_cond_wait(&condi, &mtx);
   
    itemQueue_.push(newItem);
    pthread_cond_broadcast(&condi);
    pthread_mutex_unlock(&mtx);

  }
  Message* receive(unsigned long& id){
   
    pthread_mutex_lock(&mtx);

    while(itemQueue_.size() == 0)
      pthread_cond_wait(&condi, &mtx);

    Item oldItem;
    oldItem = itemQueue_.front();
    id = oldItem.id_;
      
    itemQueue_.pop();
    pthread_cond_broadcast(&condi);
    pthread_mutex_unlock(&mtx);
    return oldItem.msg_;
  }  
 
  ~MsgQueue(){
  }
private:
  queue<Item> itemQueue_;
  unsigned int size_;
  pthread_cond_t condi;
  pthread_mutex_t mtx;
};

#endif

