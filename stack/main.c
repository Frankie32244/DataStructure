#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
#include "stackfoo.h"

#define MaxSize 20

// typedef struct {
//     int * base;                                     
//     int * top;                               
//     int stacksize;                          // stackSize = MaxSize     
// }stack;

void menu()
{
	printf("********1.Get stack size                 2.Push**********\n");
	printf("********3.Pop                            4.Get top**********\n");
	printf("********5.Clear                          6.Exit***********\n");
}


int main()
{
	//Init Linked List
	stack * S_ptr = (stack *)malloc(sizeof(stack));
    initStack(S_ptr);

	int choice;

	while (1)
	{
		menu();
		printf("Please enter the choice(1-6):\n");
		scanf("%d", &choice);
		if (6 == choice) break;
		switch (choice)
		{
		case 1:GetStackSize(S_ptr); break;
		case 2:Push(S_ptr); break;
		case 3:Pop(S_ptr); break;
		case 4:GetTop(S_ptr); break;
		case 5:Clear(S_ptr); break;
		default:printf("Wrong choice !!! Please enter the correct choice!!\n");
		}
	}
	return 0;
}