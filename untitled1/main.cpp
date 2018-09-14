#include <iostream>
#include "MyStack.h"
#include "Coordinate.h"
using namespace std;


int main() {
    MyStack<Coordinate> *pStack=new MyStack<Coordinate>(4);

    pStack->push(Coordinate(1,2));
    pStack->push(Coordinate(2,2));
    pStack->push(Coordinate(3,2));
    pStack->push(Coordinate(4,2));
    pStack->push(Coordinate(5,2));
    pStack->push(Coordinate(6,2));

    if(pStack->stackEmpty()){
        cout<<"Õ»Îª¿Õ"<<endl;
    }

    if(pStack->stackFull()){
        cout<<"Õ»ÎªÂú"<<endl;
    }


    pStack->stackTraverse();

    Coordinate e;
    pStack->pop(e);
    e.printCoordinate();


    pStack->stackTraverse();

    delete pStack;
    pStack=NULL;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}