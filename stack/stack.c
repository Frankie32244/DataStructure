#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

// typedef struct {
//     int * base;                                     
//     int * top;                               
//     int stacksize;                                     
// }stack;


bool isEmpty(stack * S_ptr){
    return S_ptr->top == S_ptr->base;
}


void initStack(stack * S_ptr){
    S_ptr->base = (int*)malloc(sizeof(int) * MaxSize);

    S_ptr->top = S_ptr->base;

    S_ptr->stacksize = MaxSize;

}


int getTop(stack * S_ptr){
   
    return *(S_ptr->top - 1);
}


void push(stack * S_ptr,int e){

    *S_ptr->top = e;
    S_ptr->top++; 

}


void pop(stack * S_ptr){
    
    S_ptr->top--;
}


void clear(stack * S_ptr){
    S_ptr->top = S_ptr->base;
}

