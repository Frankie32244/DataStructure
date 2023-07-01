#ifndef SEQLIST_H
#define SEQLIST_H

typedef struct {
    int length;                                       // 当前长度
    int * elem;                                       // 存储空间基址
}sequenceList;

 
void createList(sequenceList* L,int* nums,int n);               // 创建

void insertList(sequenceList* L,int index,int e);     // 增

void deleteList(sequenceList* L,int index);           // 删

void modifyList(sequenceList* L,int index,int e);     //  改

int locateList(sequenceList* L,int index);          //  查

void printList(sequenceList*L);                      //  输出线性表

void reverseList(sequenceList* L);                  // 反转线性表


#endif