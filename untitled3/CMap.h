//
// Created by Administrator on 2018/9/26/026.
//

#ifndef UNTITLED3_CMAP_H
#define UNTITLED3_CMAP_H

#include <iostream>
#include <vector>
#include "Node.h"
using namespace std;

class CMap{
    CMap(int capacity);
    ~CMap();
    bool addNode(Node *pNode);     //向图中加入定点（节点）
    void resetNode();                           // 重置顶点
    bool setValueToMatrixForDirectedGraph(int row ,int col,int val=1);      //为有向图设置邻接矩阵
    bool setValueToMatrixForUndirectedGraph(int row ,int col,int val=1);    //为无向图设置邻接矩阵

    void printMatrix(); //打印邻接矩阵


    void depthFirstTraverse();  //  深度优先遍历

    void breadthFirstTraverse();    //广度优先遍历

private:
    bool getValueFromMartrix(int nodeIndex);        //从矩阵中获得权值
    void breadthFirstTraverse(vector<int> preVec);          //广度优先遍历实现函数

private:
    int m_iCapacity;    //图中最多可容纳的顶点数
    int m_iNodeCount;   //已经添加的顶点（结点）个数
    Node *m_pNodeArray;   //用于存放顶点数组
    int *m_pMartirx;    //用于存放邻接矩阵
 };


#endif //UNTITLED3_CMAP_H
