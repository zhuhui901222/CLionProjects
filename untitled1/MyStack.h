//
// Created by Administrator on 2018/9/12/012.
//

#ifndef UNTITLED1_MYSTACK_H
#define UNTITLED1_MYSTACK_H
#include <iostream>
//#include "Coordinate.h"

using namespace std;

template <typename T>
class MyStack{
public:
    MyStack(int size);
    ~MyStack();
    bool stackEmpty(); //判断栈是否为空
    bool stackFull();  //判断栈是否满
    void clearStack(); //清空栈
    int stackLength();  //已有元素个数
    bool push(T elem);   //元素入栈
    bool pop(T &elem);  //元素出栈
    void stackTraverse();  //遍历所有元素
private:
    T *m_pBuffer;    //栈空间指针
    int m_iSize;  //栈容量
    int m_iTop; //栈顶 元素个数
};


template <typename T>
MyStack<T>::MyStack(int size) {
    m_iSize=size;
    // m_pBuffer=new char[size];
    m_pBuffer=new T[size];
    m_iTop=0;
}

template <typename T>
MyStack<T>::~MyStack() {
    delete []m_pBuffer;
    m_pBuffer=NULL;
}

template <typename T>
bool MyStack<T>::stackEmpty() {
    return m_iTop==0?true:false;
}


template <typename T>
bool MyStack<T>::stackFull() {
    return m_iTop==m_iSize?true:false;
}


template <typename T>
void MyStack<T>::clearStack() {
    m_iTop=0;
}
template <typename T>
int MyStack<T>::stackLength() {
    return m_iTop;
}


template <typename T>
bool MyStack<T>::push(T elem) {
    if(stackFull()){
        return false;
    }
    m_pBuffer[m_iTop]=elem;
    m_iTop++;
    return true;
}

/*
char MyStack::pop(){
    if(stackEmpty()){
        throw 1;
    }
    m_iTop--;
    return m_pBuffer[m_iTop];
}
*/


template <typename T>
bool MyStack<T>::pop(T &elem) {
    if(stackEmpty()){
        return false;
    }
    m_iTop--;
    elem=m_pBuffer[m_iTop];
    return true;
}

template <typename T>
void MyStack<T>::stackTraverse() {
    for (int i = 0; i < m_iTop; ++i) {
        cout<<m_pBuffer[i]<<endl;    //char
        // m_pBuffer[i].printCoordinate();
    }
}




#endif //UNTITLED1_MYSTACK_H
