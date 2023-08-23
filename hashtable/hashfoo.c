#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

void insertToHashtable(HashTable* H){
    char key[50]; //try to using key[50], not char* , or it wiil get error segmentation fault!
    int value;
    printf("Please enter the key and the value(key must be string and value must be integer!):");
    scanf("%s %d",key,&value);    // key not &key!

    insert(H,key,value);

    printf("\ninsert success!\n");
}


void getValue(HashTable* H){
    char key[50];
    int value ;
    printf("Please enter the key :");
    scanf("%s",key);

    value = get(H,key);

    if(value == -1){
        printf("key is not found!\n");
    }
    else{
        printf("key:%d\n",value);
    }

}


void modifyValue(HashTable* H){
    char* key;
    int newValue;
    printf("Please enter the key and the corresponding updated value:");
    
    scanf("%s %d",key,&newValue);

    if(modify(H,key,newValue)){
        printf("Modifying success!\n");
    }
    else{
        printf("The key is not found\n");
    }

}