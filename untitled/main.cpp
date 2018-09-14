#include <iostream>
#include "MyQueue.h"
using namespace std;

int main1(){
    MyQueue *p=new MyQueue(4);
    p->EnQueue(10);
    p->EnQueue(12);
    p->EnQueue(14);
    p->EnQueue(16);
    p->EnQueue(18);

    int e=0;
    p->DeQueue(e);
    cout<<e<<endl;


    p->QueueTraverse();


    delete p;
    p=NULL;
//system("pause");
    return 0;
};



