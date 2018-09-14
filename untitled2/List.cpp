//
// Created by Administrator on 2018/9/14/014.
//

#include "List.h"
#include <iostream>

using namespace std;


List::List(int size) {
    m_iSize = size;
    m_pList = new int[m_iSize];
    m_iLength = 0;
}

List::~List() {
    delete[]m_pList;
    m_pList = NULL;
}


void List::ClearList() {
    m_iLength = 0;
}


bool List::ListEmpty() {
    return m_iLength == 0 ? true : false;
}


int List::ListLength() {
    return m_iLength;
}


bool List::GetElem(int i, int *e) {
    if (i < 0 || i >= m_iSize) {
        return false;
    }
    *e = m_pList[i];
    return true;
}


int List::LocateElem(int *e) {

    for (int i = 0; i < m_iLength; i++) {
        if (m_pList[i] == *e) {
            return i;
        }
    }
    return -1;
}


bool List::PriorElem(int *currentElem, int *preElem) {
    int temp=LocateElem(currentElem);
    if(temp<=0){
        return false;
    }
    *preElem=m_pList[temp-1];
    return  true;
}

bool List::NextElem(int *currentElem, int *preElem) {
    int temp=LocateElem(currentElem);
    if(temp==-1||temp==m_iSize){
        return false;
    }
    *preElem=m_pList[temp+1];
    return  true;
}


void List::ListTraverse() {
    for (int i = 0; i < m_iLength; ++i) {
        cout<<m_pList[i]<<endl;
    }

}



bool List::ListInsert(int i,int *e) {
    if(i<0||i>m_iLength){
        return false;
    }
    if(m_iLength==m_iSize){
        return false;
    }
    for (int k = m_iLength-1; k >=i; k--) {
        m_pList[k+1]=m_pList[k];
    }
    m_pList[i]=*e;
    m_iLength++;
    return true;
}

bool List::ListDelete(int i, int *e) {
    *e=m_pList[i];
    for (int k = i+1; k < m_iLength; ++k) {
        m_pList[k-1]=m_pList[k];
    }
    m_iLength--;
    return true;
}



