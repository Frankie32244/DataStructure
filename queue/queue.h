#include<stdbool.h>
#ifndef QUEUE_H
#define QUEUE_H
#define MaxSize 100

typedef struct {
    int * elem;
    int front;
    int rear;
    int len;
}queue;

void initQueue(queue* q_ptr);

void Enqueue(queue* q_ptr);

void Dequeue(queue* q_ptr);

void GetFront(queue* q_ptr);

void Display(queue* q_ptr);

void menu();


#endif
