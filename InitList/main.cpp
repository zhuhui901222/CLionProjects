#include <iostream>
#include "Tree.h"

using namespace std;



int main ()
{
    int root=3;
    Tree *pTree=new Tree(10,&root);

    int node1=5;
    int node2=8;
    pTree->AddNode(0,0,&node1);
    pTree->AddNode(0,1,&node2);

    int node3=2;
    int node4=6;
    pTree->AddNode(1,0,&node3);
    pTree->AddNode(1,1,&node4);


    int node5=9;
    int node6=7;
    pTree->AddNode(2,0,&node5);
    pTree->AddNode(2,1,&node6);


    int *p=pTree->SearchNode(2);
    cout<<*p<<endl;
    pTree->TreeTraverse();
    int node=0;
    pTree->Deletenode(2,&node);
    cout<<node<<endl;

    pTree->TreeTraverse();

    delete pTree;

    return 0;
    int c[4]={1,2,3,4};
    int *a[4]; //指针数组
    int (*b)[4]; //数组指针
    b=&c;
//将数组c中元素赋给数组a
    for(int i=0;i<4;i++)
    {
        a[i]=&c[i];
    }
//输出看下结果
    cout<<*a[1]<<endl; //输出2就对
    cout<<(*b)[2]<<endl; //输出3就对
    return 0;
}