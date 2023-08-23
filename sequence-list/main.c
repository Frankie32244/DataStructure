#include<stdio.h>
#include<stdlib.h>
#include "seqlist.h"
#include "sqfoo.h"

#define listSize 100          // the seqlist Maxsize is 100


int main()
{
	//Init seqlist
	sequenceList* L = (sequenceList*)malloc(sizeof(sequenceList));
  	L->elem = (int *)malloc(sizeof(int) * listSize);
    L->length = 0;
	
	//choice from 1~7
	int choice;

	while (1)
	{
		menu();
		printf("Please enter the choice(1-7):\n");
		scanf("%d", &choice);
		if (9 == choice) break;
		switch (choice)
		{
		case 1:Create(L); break;
		case 2:Insert(L); break;
		case 3:Delete(L); break;
		case 4:Modify(L); break;
		case 5:Locate(L); break;
		case 6:Print(L); break;
		case 7:Reverse(L); break;
		case 8:Clear(L);break;
		default:printf("Wrong choice !!! Please enter the correct choice!!\n");
		}
	}
	
	return 0;
}
