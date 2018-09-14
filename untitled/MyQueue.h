//
// Created by Administrator on 2018/9/11/011.
//

#ifndef UNTITLED_MYQUEUE_H
#define UNTITLED_MYQUEUE_H

class MyQueue {
public:
    MyQueue(int queueCapacity);   //创建队列
    virtual ~MyQueue();             //销毁队列
    void CleanQueue();    //清空队列
    bool QueueEmpty()  const;   //判空队列
    int QueueLength() const; //队列长度
    bool QueueFull();     //队列判满
    bool EnQueue(int element);    //新元素入列
    bool DeQueue(int &element);    //首元素入队
    void QueueTraverse();  //遍历队列
private:
    int  *m_pQueue;   //队列数组指针
    int m_iQueueLen; //队列元素个数
    int m_iQueueCapacity;  //队列数组容量
    int m_iHead;  //队头
    int m_iTail;  //队尾

};

#endif //UNTITLED_MYQUEUE_H

