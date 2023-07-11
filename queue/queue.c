#include<stdlib.h>
#include<stdio.h>
#include "queue.h"



void menu(){
	printf("********1.Enqueue                 2.Dequeue**********\n");
	printf("********3.Get front               4.Display**********\n");
    printf("********5.Exit\n");
}

void initQueue(queue* q_ptr){
    q_ptr -> elem = (int * ) malloc(sizeof(int) * MaxSize);
    q_ptr->front = 0;
    q_ptr->rear = 0;
    q_ptr->len = 0;
}

void Enqueue(queue* q_ptr){
    int e ;
    if(q_ptr->len == MaxSize){
        printf("The queue is out of space! Can't be enqueued any element!\n");
        return;
    }
    printf("Please enter the value you wanna enqueue:");
    scanf("%d",&e);
    for(int i = q_ptr->len ; i > 0; i--){
        q_ptr->elem[i] = q_ptr->elem[i-1];
    }

    q_ptr->elem[q_ptr->rear] = e;
    q_ptr->front++;
    q_ptr->len++;
    printf("%d Enqueuing successfully!!\n",e);

}

void Dequeue(queue* q_ptr){
    if(q_ptr-> len == 0){
        printf("The queue is empty! Can't be dequeued\n");
        return;
    }
    printf("The value %d is dequeued!\n",q_ptr->elem[q_ptr->front-1]);
    q_ptr->len--;
    q_ptr->front--;
}

void GetFront(queue* q_ptr){
    if(q_ptr->len == 0){
        printf("The queue is empty!\n");
    }
    printf("The front value of the queue is : %d\n",q_ptr->elem[q_ptr->rear]);
    return;
}

void Display(queue* q_ptr){
    int n = q_ptr->len;
    
    if(n == 0){
        printf("The queue is empty! Can't be displayed!\n");
    }

    for(int i = 0 ; i < n; i++){
        printf("%d ",q_ptr->elem[i]);
    }
    printf("\n");
}