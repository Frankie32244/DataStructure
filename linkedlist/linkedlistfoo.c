#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"
#include "linkedlistfoo.h"

void Create(ListNode* L)
{
	int n;
	
	printf("Please enter the length of the seqlist you wanna create (length > 1):");
	scanf("%d", &n);

    if(n < 1){
        printf("Incorrect length!!!\n");
        return;
    }
    // a tempoary array to store the input nums
    int* nums =(int *)malloc(sizeof(int) * n);
    printf("Please enter %d numbers:",n);
	for(int i = 0; i < n ;i++){
		int temp;
		scanf("%d", &temp);
		nums[i] = temp;
	}
    
    createList(L, nums, n);
	
	printList(L);
}

void Insert(ListNode *L)
{
	int index; int e;
	printf("Please enter the position to be inserted (starting from 1) and the element:\n");
	scanf("%d%d", &index, &e);

    if(index < 1 || index > (L->len + 1)){
        printf("Error index!\n");
        return;
    }

	insertList(L, index, e);

	printList(L);
}

void Delete(ListNode *L)
{
	int index;
	printf("Please enter the position to delete (starting from 1):\n");
	scanf("%d", &index);
    // check the linked list is empty or not 
    if(L->len == 0){
        printf("The linked list is empty! Can't be removed any element!\n");
        return;
    }
    // check the index of the delete node is legal 
    if(index < 1 ){
        printf("Error index!\n");
        return;
    }

	deleteList(L, index);

	printList(L);
}
void Modify(ListNode* L){
	int index , e;
	printf("Please enter the position to be modified (starting from 1) and the modified value:\n");
	scanf("%d %d", &index,&e);

    if(L->len == 0){
        printf("The linkedlist is empty!\n");
        return;
    }

    if(index < 0 || index > L->len){
        printf("Error index!\n");
        return;
    }

	modifyList(L,index,e);

	printList(L);
}

void Locate(ListNode* L)
{
	int index;
	printf("Please enter the index you want to find:\n");
	scanf("%d", &index);

    if(L->len == 0){
        printf("The linkedlist is empty!\n");
        return;
    }

    if(index < 0 || index > L->len){
        printf("Error index!\n");
        return;
    }

	int val = locateList(L, index);
	printf("The value at the %dth position is %d\n",index,val);
}

void Print(ListNode* L){
    if(L->len == 0){
        printf("The linkedlist is empty! Can't be displayed!!\n");
        return;
    }
	 printList(L); 
}

void Reverse(ListNode* L){
    if(L->len == 0){
        printf("The linkedlist is empty! Can't be reversed!\n");
        return;
    }
    reverseList(L);

	printList(L);
}

void Clear(ListNode* L){
    if(L->len == 0){
        printf("The linkedlist is already empty!\n");
        return;
    }

	clearList(L);
    printf("Clear the linked list successfully!\n");
}

