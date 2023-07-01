#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct {
    int data;
    struct ListNode * next;
}ListNode;

int size(ListNode* L);                            //表长

void createList(ListNode* L,int *nums);               // 创建

void insertList(ListNode* L,int index,int e);     // 增

void deleteList(ListNode* L,int index);           // 删

void modifyList(ListNode* L,int index,int e);     //  改

void locateList(ListNode* L,int index);          //  查

void printList(ListNode* L);                      //  输出链表

void reverseList(ListNode* L);                  // 反转链表


#endif