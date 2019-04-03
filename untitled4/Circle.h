//
// Created by Administrator on 2018/10/16/016.
//

#ifndef UNTITLED4_CIRCLE_H
#define UNTITLED4_CIRCLE_H

#include "Shape.h"

class Circle:public Shape{
public:
    Circle(double r);
    virtual ~Circle();
    virtual double caleArea();
protected:
    double m_dR;

};


#endif //UNTITLED4_CIRCLE_H
