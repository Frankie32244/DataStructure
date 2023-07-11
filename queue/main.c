#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

// typedef struct {
//     int * elem;
//     int front;
//     int rear;
//     int len;
// }queue;



int main()
{
	//Init Linked List
	queue* q_ptr = (queue*)malloc(sizeof(queue));
    initQueue(q_ptr);

	int choice;

	while (1)
	{
		menu();
		printf("Please enter the choice(1-4):\n");
		scanf("%d", &choice);
		if (5 == choice) break;
		switch (choice)
		{
		case 1:Enqueue(q_ptr); break;
		case 2:Dequeue(q_ptr); break;
		case 3:GetFront(q_ptr); break;
        case 4:Display(q_ptr); break;
		default:printf("Wrong choice !!! Please enter the correct choice!!\n");
		}
	}
	return 0;
}








