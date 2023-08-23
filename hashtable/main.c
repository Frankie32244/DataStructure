#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashfoo.h"
#include "hash.h"


void menu(){
    printf("********1.Insert                        2.Get**********\n");
	printf("********3.Modify                        4.Exit*********\n");
}

int main() {
    
    //init a hashTable
    HashTable *hashTable = createHashTable();
    
    int choice;

	while (1)
	{
		menu();
		printf("Please enter the choice(1-4):\n");
		scanf("%d", &choice);
		if (4 == choice) break;
		switch (choice)
		{
		case 1:insertToHashtable(hashTable); break;
		case 2:getValue(hashTable); break;
		case 3:modifyValue(hashTable); break;
		default:printf("Wrong choice !!! Please enter the correct choice!!\n");
		}
	}
    destroyHashTable(hashTable);
	return 0;
}


// !!! can't solve the hash collision !!!