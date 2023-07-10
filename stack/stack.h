#ifndef STACK_H
#define STACK_H
#define MaxSize 100

typedef struct {
    int * base;                                     
    int * top;                               
    int stacksize;                          // 当前已分配的存储空间    
}stack;

int empty(stack S);                         // 判断是否为空,1不空，0为空

void initStack(stack S);                    // 初始化栈

int getTop(stack S);                        // 取栈顶

void push(stack S,int e);                   // 入栈

void pop(stack S);                         // 出栈

#endif