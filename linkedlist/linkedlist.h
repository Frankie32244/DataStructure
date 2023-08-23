#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct {
    int val;
    struct ListNode * next;
    int len;
}ListNode;


void createList(ListNode* L,int *nums,int n);               // create a linkedlist

void insertList(ListNode* L,int index,int e);     // insert a value to the linked list

void deleteList(ListNode* L,int index);           // delete some element from the linked list

void modifyList(ListNode* L,int index,int e);     //  modify some element from the linked list

int locateList(ListNode* L,int index);          //  locate the liked list with an index 

void printList(ListNode* L);                      //  print each element in the linked list orderly

void reverseList(ListNode* L);                  // reverse the linked list 

void clearList(ListNode* L);

#endif