#include<stdio.h>
#include<stdlib.h>
#include "seqlist.h"

void Create(sequenceList* L)
{
	int n;
	
	printf("请输入要创建的顺序表长度(>1):");
	scanf("%d", &n);
	printf("请输入%d个数（空格隔开）:", n);

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
	printf("请输入要插入的位置(从1开始)及元素:\n");
	scanf("%d%d", &index, &e);
	
	insertList(L, index, e);

	printList(L);
}

void Delete(sequenceList *L)
{
	int index;
	printf("请输入要删除的位置(从1开始):\n");
	scanf("%d", &index);
	deleteList(L, index);

	printList(L);
}
void Modify(sequenceList* L){
	int index , e;
	printf("请输入要修改的位置(从1开始)和修改值:\n");
	scanf("%d %d", &index,&e);
	modifyList(L,index,e);

	printList(L);
}

void Locate(sequenceList* L)
{
	int index;
	printf("请输入要查找的index:\n");
	scanf("%d", &index);
	int val = locateList(L, index);
	printf("The value is %d\n",val);
}

void Print(sequenceList* L){
	printList(L);  

}

void Reverse(sequenceList* L){
	reverseList(L);

	printList(L);
}

void menu()
{
	printf("********1.创建                        2.插入*********\n");
	printf("********3.删除                        4.修改*********\n");
	printf("********5.查找                        6.输出*********\n");
	printf("********7.反转                        8.退出*********\n");
}
