#include<stdbool.h>
#ifndef STACK_H
#define STACK_H
#define MaxSize 100

typedef struct {
    int * base;                                     
    int * top;                               
    int stacksize;                          // 当前已分配的存储空间    
}stack;

bool isEmpty(stack* S_pointer);                         // 判断是否为空,1不空，0为空

void initStack(stack* S_pointer);                    // 初始化栈

int getTop(stack* S_pointer);                        // 取栈顶

void push(stack* S_pointer,int e);                   // 入栈

void pop(stack* S_pointer);                         // 出栈  huang 

void clear(stack* S_pointer);

#endif