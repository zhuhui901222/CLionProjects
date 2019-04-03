//
// Created by Administrator on 2018/10/16/016.
//

#ifndef UNTITLED4_RECT_H
#define UNTITLED4_RECT_H

#include "Shape.h"

class Rect:public Shape{
public:
    Rect(double width,double height);
    virtual ~Rect();
    virtual double caleArea();

protected:
    double m_dWidth;
    double m_dHeight;
};


#endif //UNTITLED4_RECT_H
