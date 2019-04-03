//
// Created by Administrator on 2018/10/16/016.
//

#include "Rect.h"

Rect::Rect(double width, double height) {
    cout<<"Rect()"<<endl;
    m_dWidth=width;
    m_dHeight=height;
}

Rect::~Rect() {
    cout<<"~Rect()"<<endl;
}

double Rect::caleArea() {
    cout<<"Rect->caleArea()"<<endl;
    return m_dWidth*m_dHeight;
}