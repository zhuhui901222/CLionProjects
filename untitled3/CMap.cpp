//
// Created by Administrator on 2018/9/26/026.
//

#include "CMap.h"
#include <iostream>
#include <vector>
#include "Node.h"
#include <cstring>


using namespace std;

CMap::CMap(int capacity) {
    m_iCapacity=capacity;
    m_iNodeCount=0;
    m_pNodeArray=new Node[m_iCapacity];
    m_pMartirx=new int[m_iCapacity*m_iCapacity];
    memset(m_pMartirx,0,m_iCapacity*m_iCapacity*sizeof(int));

}


CMap::~CMap() {
    delete []m_pNodeArray;
    delete []m_pMartirx;
}


bool CMap::addNode(Node *pNode) {
    m_pNodeArray[m_iNodeCount].m_cData=pNode->m_cData;
    m_iNodeCount++;
    return true;
}


void CMap::resetNode() {
    for (int i = 0; i < m_iNodeCount; ++i) {
        m_pNodeArray[i].m_bIsVisited= false;
    }
}


