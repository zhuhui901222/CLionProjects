//
// Created by Administrator on 2018/10/16/016.
//

#include "Circle.h"
Circle::Circle(double r) {
    cout<<"Circle()"<<endl;
    m_dR=r;
}

Circle::~Circle() {
    cout<<"~Circle()"<<endl;
}


double Circle::caleArea() {
    cout<<"Circle->caleArea()"<<endl;
    return 3.14*m_dR*m_dR;
}