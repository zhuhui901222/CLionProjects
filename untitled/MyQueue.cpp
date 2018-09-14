#include <iostream>
#include "MyQueue.h"
using namespace std;

MyQueue::MyQueue(int queueCapacity) {
    m_iQueueCapacity=queueCapacity;
    m_pQueue=new int[m_iQueueCapacity];
    CleanQueue();
}

MyQueue::~MyQueue() {
    delete []m_pQueue;
    m_pQueue=NULL;
}

void MyQueue::CleanQueue() {
    m_iQueueLen=0;
    m_iHead=0;
    m_iTail=0;
}

bool MyQueue::QueueEmpty() const {
    if(m_iQueueLen==0){
        return true;
    } else{
        return false;
    }
}

int MyQueue::QueueLength() const {
    return m_iQueueLen;
}

bool MyQueue::QueueFull() {
    if(QueueLength()==m_iQueueCapacity){
        return true;
    }else{
        return  false;
    }
}

bool MyQueue::EnQueue(int element) {
    if(QueueFull()){
        return false;
    } else{
        m_pQueue[m_iTail]=element;
        m_iTail++;
        m_iTail=m_iTail%m_iQueueCapacity;
        m_iQueueLen++;
        return true;
    }
}

bool MyQueue::DeQueue(int &element) {
    if(QueueEmpty()){
        return false;
    } else{
        element=m_pQueue[m_iHead];
        m_iHead++;
        m_iHead=m_iHead%m_iQueueCapacity;
        m_iQueueLen--;
        return true;
    }
}

void MyQueue::QueueTraverse() {
    cout<<endl;
    for(int i=m_iHead;i<m_iQueueLen+m_iHead;i++){
        cout<<m_pQueue[i%m_iQueueCapacity]<<endl;
    }
    cout<<endl;
}


