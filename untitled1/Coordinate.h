//
// Created by Administrator on 2018/9/13/013.
//

#ifndef UNTITLED1_COORDINATE_H
#define UNTITLED1_COORDINATE_H

#include <ostream>
using namespace std;



class Coordinate{
    friend ostream &operator<<(ostream &out,Coordinate &coor);
public:
    Coordinate(int x=0 ,int y=0);
    void printCoordinate();


private:
    int m_iX;
    int m_iY;
};


#endif //UNTITLED1_COORDINATE_H
