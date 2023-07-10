#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#include "seqlist.h"

#define listSize 100

// typedef struct {
//     int length;                                       // length of sequence list
//     int * elem;                                       // array in the sequence list
// }sequenceList;

// check the index is out of bound or not 
bool checkIndex(int index,sequenceList* L){

    if(index < 1 || index > L->length)
        return false;

    return true;

}
void createList(sequenceList* L,int* nums,int n){
    

    for(int i = 0; i < n ;i++){
        L->elem[i] = nums[i];
    }

    L->length = n;
}

void insertList(sequenceList* L,int index,int e){
    int n = L->length;

    if(index < 1 || index > L->length + 1){
        printf("Incorrect index!!!\n");
        return ;
    }

    if(n == listSize){    
        printf("The list is out of space!");
        return;
    }

    for(int i = n  ; i > index - 1 ; i--){
        L->elem[i] = L->elem[i - 1];
    }
    L->elem[index - 1] = e;
    L->length++;
}

void deleteList(sequenceList* L,int index){
    int n = L->length;

    if(n == 0){
        printf("Error! The seqlist is empty! Can't be deleted!!\n");
        return;
    }

    if(!checkIndex(index,L)){
        printf("Incorrect index!!!\n");
        return;
    }

    for(int i = index - 1; i < n - 1 ;i++){
        L->elem[i] = L->elem[i + 1];
    }
    L->length--;
}

void modifyList(sequenceList* L,int index,int e){

    if(!checkIndex(index,L)){
        printf("Incorrect index!!!\n");
        return;
    }

    if(L->length == 0){
        printf("Error! The seqlist is empty! Can't be modifed!!\n");
        return;
    }

    L->elem[index - 1] = e;
    
}

int locateList(sequenceList* L,int index){
    int n = L->length;

    if(n == 0){
        printf("Error! The seqlist is empty!\n");
        return -1;
    }

    if(!checkIndex(index,L)){
        printf("Incorrect index!!!\n");
        return -1;
    }

    return L->elem[index - 1];
}

void printList(sequenceList*L){
    int n = L->length;

    if(n == 0){
        printf("Error! The seqlist is empty! Can't be displayed!!\n");
        return;
    }

    for(int i = 0 ; i < n ; i++){
        printf("%d ",L->elem[i]);
    }

    printf("\n");

}

void reverseList(sequenceList* L){
    int n = L->length / 2;

    if(L->length == 0){
        printf("Error! The seqlist is empty! Can't be reversed!!!\n");
        return;
    }

    for(int i = 0 ; i < n ; i++){
        int temp = L->elem[i];
        L->elem[i] = L->elem[L->length - i - 1];
        L->elem[L->length - i - 1] = temp;
    }

}

void clearList(sequenceList* L){
    L->length  = 0;
}