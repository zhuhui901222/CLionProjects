//
// Created by Administrator on 2018/9/14/014.
//

#ifndef UNTITLED2_LIST_H
#define UNTITLED2_LIST_H



class  List{
public:
    List(int size);
    ~List();
    void ClearList();
    bool ListEmpty();
    int ListLength();
    bool GetElem(int i,int *e);
    int LocateElem(int *e);
    bool PriorElem(int *currentElem, int *preElem);  //获取指定元素的前驱
    bool NextElem(int *currentElem, int *preElem);  //获取指定元素的后继
    void ListTraverse();
    bool ListInsert(int i,int *e);
    bool ListDelete(int i,int *e);

private:
    int *m_pList;
    int m_iSize;
    int m_iLength;

};


#endif //UNTITLED2_LIST_H
