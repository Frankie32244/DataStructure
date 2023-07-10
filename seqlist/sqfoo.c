#include<stdio.h>
#include<stdlib.h>
#include "seqlist.h"

#define listSize 100
void Create(sequenceList* L)
{
	int n;
	
	printf("Please enter the length of the seqlist you wanna create (length > 1):");
	scanf("%d", &n);

	if(n < 1 || n > listSize){
        printf("Incorrect length!!!\n");
        return;
    }

	printf("Please enter %d numbers (divided by space):", n);

	int* nums =(int *)malloc(sizeof(int) * n);
	for(int i = 0; i < n ;i++){
		int temp;
		scanf("%d", &temp);
		nums[i] = temp;
	}
	createList(L, nums, n);
	
	printList(L);
}

void Insert(sequenceList *L)
{
	int index; int e;
	printf("Please enter the position to be inserted (starting from 1) and the element:\n");
	scanf("%d%d", &index, &e);
	
	insertList(L, index, e);

	printList(L);
}

void Delete(sequenceList *L)
{
	int index;
	printf("Please enter the position to delete (starting from 1):\n");
	scanf("%d", &index);
	deleteList(L, index);

	printList(L);
}
void Modify(sequenceList* L){
	int index , e;
	printf("Please enter the position to be modified (starting from 1) and the modified value:\n");
	scanf("%d %d", &index,&e);
	modifyList(L,index,e);

	printList(L);
}

void Locate(sequenceList* L)
{
	int index;
	printf("Please enter the index you want to find:\n");
	scanf("%d", &index);
	int val = locateList(L, index);
	if(val != -1) 
		printf("The value is %d\n",val);
	else 
		printf("\n");
}

void Print(sequenceList* L){
	printList(L);  
}

void Reverse(sequenceList* L){

	reverseList(L);

	printList(L);
}

void Clear(sequenceList* L){
	clearList(L);
	printf("Clear the sequence list successfully !\n");
}

void menu()
{
	printf("********1.Create                        2.Insert**********\n");
	printf("********3.Delete                        4.Modify**********\n");
	printf("********5.Search                        6.Display*********\n");
	printf("********7.Reverse                       8.Clear***********\n");
	printf("********9.Exit\n");
}
