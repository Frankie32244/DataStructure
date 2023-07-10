#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"
#include "linkedlistfoo.h"

void menu()
{
	printf("********1.Create                        2.Insert**********\n");
	printf("********3.Delete                        4.Modify**********\n");
	printf("********5.Search                        6.Display*********\n");
	printf("********7.Reverse                       8.Clear***********\n");
	printf("********9.Exit\n");
}


int main()
{
	//Init Linked List
	ListNode* L = (ListNode*)malloc(sizeof(ListNode));

	int choice;

	while (1)
	{
		menu();
		printf("Please enter the choice(1-8):\n");
		scanf("%d", &choice);
		if (9 == choice) break;
		switch (choice)
		{
		case 1:Create(L); break;
		case 2:Insert(L); break;
		case 3:Delete(L); break;
		case 4:Modify(L); break;
		case 5:Locate(L); break;
		case 6:Print(L); break;
		case 7:Reverse(L); break;
		case 8:Clear(L);break;
		default:printf("Wrong choice !!! Please enter the correct choice!!\n");
		}
	}
	
	return 0;
}