#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"

// typedef struct {
//     int data;
//     struct ListNode * next;
// }ListNode;

int size(ListNode* L){
    int len = 0;
    ListNode* q = L->next;

    while(q != NULL){
        len++;
        q = q->next;
    }

    return len;
}

void createList(ListNode* L,int *nums){
    ListNode* L = (ListNode*)malloc(sizeof(ListNode*));
    L->next = NULL;
}

void insertList(ListNode* L,int index,int e){
    int len = size(L),cnt = 0;
    if(index < 1 || index > len + 1){
        printf("Error index!\n");
        return;
    }
    ListNode* q = L;
    while(cnt < index - 1){
        q = q->next;
        cnt++;
    }
    ListNode* temp = (ListNode*)malloc(sizeof(ListNode*));
    temp->data = e;
    temp->next = q->next;
    q->next = temp;

}

void deleteList(ListNode* L,int index){
    int len = size(L),cnt = 0;
    if(index < 1 ){
        printf("Error index!\n");
        return;
    }
    if(len == 0 ){
        printf("The linkedlist is empty ! Can't be deleted!\n");
    }

    ListNode* q = L;
    while(cnt < index - 1){
        q = q->next;
        cnt++;
    }
    ListNode* temp = q->next;
    q->next = q->next->next;
    free(temp);

    return;
}

void modifyList(ListNode* L,int index,int e){
    int len = size(L);

    if(len == 0){
        printf("The linkedlist is empty!\n");
        return;
    }

    if(index < 0 || index > len){
        printf("Error index!\n");
        return;
    }

    int cnt = 1;

    ListNode* q = L->next;

    while(cnt != index){
        q = q->next;
        cnt++;
    }
    q->data = e;
}

void locateList(ListNode* L,int index){
    int len = size(L);

    if(len == 0){
        printf("The linkedlist is empty!\n");
        return;
    }

    if(index < 0 || index > len){
        printf("Error index!\n");
        return;
    }

    int cnt = 1;

    ListNode* q = L->next;

    while(cnt != index){
        q = q->next;
        cnt++;
    }
    printf("%d ",q->data);
}

void printList(ListNode* L){
    int len = size(L);

    if(len == 0){
        printf("The linkedlist is empty!\n");
        return;
    }

    ListNode* q = L->next;

    while(q != NULL){
        printf("%d ",q->data);
        q = q->next;
    }
}

void reverseList(ListNode* L){
    ListNode* prev = NULL, *head = L;
    while(head != NULL){
        ListNode* temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    L = prev;
}