#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"

// typedef struct {
//     int val;
//     struct ListNode * next;
//     int len;
// }ListNode;


void createList(ListNode* L,int *nums,int n){
    ListNode* head = L;
    for(int i = 0 ; i < n; i++){
        ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
        new_node->next = NULL;
        new_node->val = nums[i];
        head->next = new_node;
        head = new_node;
    }
    L->len = n;
}

void insertList(ListNode* L,int index,int e){
    int cnt = 0;
    
    ListNode* head = L;
    while(cnt < index - 1){
        head = head->next;
        cnt++;
    }
    // insert a linked list node called temp
    ListNode* temp = (ListNode*)malloc(sizeof(ListNode*));
    temp->val = e;
    temp->next = head->next;
    head->next = temp;
    
    L->len++;
}

void deleteList(ListNode* L,int index){
    int cnt = 0;
    
    ListNode* head = L;
    while(cnt < index - 1){
        head = head->next;
        cnt++;
    }
    ListNode* temp = head->next;
    head->next = temp->next;  // same meaning as head->next = head->next->next
    free(temp);

    L->len--;
}

void modifyList(ListNode* L,int index,int e){

    int cnt = 1;

    ListNode* q = L->next;

    while(cnt != index){
        q = q->next;
        cnt++;
    }
    q->val = e;
}

int locateList(ListNode* L,int index){
    
    int cnt = 1;

    ListNode* q = L->next;

    while(cnt != index){
        q = q->next;
        cnt++;
    }
    return q->val;
}

void printList(ListNode* L){
    ListNode* q = L->next;

    while(q != NULL){
        printf("%d ",q->val);
        q = q->next;
    }
    printf("\n");
}

void reverseList(ListNode* L){
    ListNode* prev = NULL, *head = L->next;
    while(head != NULL){
        ListNode* temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    L->next = prev;
}

void clearList(ListNode* L){
    ListNode* head = L->next,*temp;

    while(head){
        temp = head->next;
        free(head);
        head = temp;
    }

    L->len = 0;
}