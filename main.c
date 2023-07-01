#include<stdio.h>
#include<stdlib.h>
#include "seqlist.h"
#include "sqfoo.h"

#define listSize 100


int main()
{
	//初始化seqlist
	sequenceList* L = (sequenceList*)malloc(sizeof(sequenceList));
    L->elem = (int *)malloc(sizeof(int) * listSize);
    L->length = 0;

	int choice;

	while (1)
	{
		menu();
		printf("请输入菜单序号：\n");
		scanf("%d", &choice);
		if (8 == choice) break;
		switch (choice)
		{
		case 1:Create(L); break;
		case 2:Insert(L); break;
		case 3:Delete(L); break;
		case 4:Modify(L); break;
		case 5:Locate(L); break;
		case 6:Print(L); break;
		case 7:Reverse(L); break;
		default:printf("输入错误！！！\n");
		}
	}
	
	return 0;
}