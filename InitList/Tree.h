//
// Created by Administrator on 2018/9/19/019.
//

#ifndef INITLIST_TREE_H
#define INITLIST_TREE_H

class Tree{
public:
    Tree(int size,int *pRoot);
    ~Tree();
    int *SearchNode(int nodeIndex);    //根据索引寻找节点
    bool AddNode(int nodeIndex,int direction, int *pNode);
    bool Deletenode(int nodeIndex,int *pNode);
    void TreeTraverse();

private:
    int *m_pTree;
    int m_iSize;
};



#endif //INITLIST_TREE_H
