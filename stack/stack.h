#include<stdbool.h>
#ifndef STACK_H
#define STACK_H
#define MaxSize 100

typedef struct {
    int * base;                                     
    int * top;                               
    int stacksize;                           
}stack;

bool isEmpty(stack* S_pointer);                        

void initStack(stack* S_pointer);                    

int getTop(stack* S_pointer);                        

void push(stack* S_pointer,int e);                   

void pop(stack* S_pointer);                         

void clear(stack* S_pointer);

#endif