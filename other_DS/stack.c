#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

// typedef struct {
//     int * base;                                     
//     int * top;                               
//     int stacksize;                                     
// }stack;

int empty(stack S){
    return S.top == S.base;
}

void initStack(stack S){
    S.base = (int*)malloc(sizeof(int) * MaxSize);

    S.top = S.base;

    S.stacksize = MaxSize;

}

int getTop(stack S){
    if( empty(S) == 1){
        printf("The stack is empty!!\n");
        return -1;
    }
    return *S.top;
}

void push(stack S,int e){
    int size = S.top - S.base;
    if(size == MaxSize){
        printf("The stack is out of space! Can't be pushed any element!!\n");
        return;
    }
    *S.top = e;
    S.top++; 
}

void pop(stack S){
    if( empty(S) == 1){
        printf("The stack is empty!! Can't pop any element!!\n");
    }
    S.top--;
}

