#ifndef SEQLIST_H
#define SEQLIST_H

typedef struct {
    int length;                                       
    int * elem;                                      
}sequenceList;

 
void createList(sequenceList* L,int* nums,int n);               // create a sequence list

void insertList(sequenceList* L,int index,int e);     // insert a value to the list

void deleteList(sequenceList* L,int index);           // delete from the list

void modifyList(sequenceList* L,int index,int e);     //  modify some value in the list

int locateList(sequenceList* L,int index);          //  locate the value of index in the list

void printList(sequenceList*L);                      //  display the sequence list

void reverseList(sequenceList* L);                  // reverse the sequence list

void clearList(sequenceList* L);

#endif