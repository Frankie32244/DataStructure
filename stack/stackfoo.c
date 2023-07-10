#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

// typedef struct {
//     int * base;                                     
//     int * top;                               
//     int stacksize;                         // stackSize = MaxSize    
// }stack;


void GetStackSize(stack * S_ptr){

    int size = S_ptr->top - S_ptr->base;

    printf("The size of the stack is %d\n",size);

}

void Push(stack * S_ptr){
    int size = S_ptr->top - S_ptr->base, e;

    if(size == S_ptr->stacksize){
        printf("The stack is out of space. Can't be push into any element!\n");
        return;
    }
    else{
        printf("Please enter the element you wanna push:");
        scanf("%d",&e);
        push(S_ptr,e);
        printf("\n");
        printf("Pushing successfully!!\n");
    }
}

void Pop(stack * S_ptr){
    if( isEmpty(S_ptr) == true){
        printf("The stack is empty!! Can't pop any element!!\n");
        return;
    }
    pop(S_ptr);

    printf("Poping successfully!\n");
} 

void GetTop(stack * S_ptr){
    if( isEmpty(S_ptr) == 1){
        printf("The stack is empty!!\n");
        return ;
    }
    int e = getTop(S_ptr);
    printf("The top value of the stack is %d.\n",e);
} 

void Clear(stack * S_ptr){
    clear(S_ptr);

    printf("Clearing the stack successfully!\n");

} 