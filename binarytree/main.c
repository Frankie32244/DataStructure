#include<stdio.h>
#include<stdlib.h>
#include "binarytree.h"
#include"binarytreefoo.h"

int main()
{
	TreeNode* T = (TreeNode*)malloc(sizeof(TreeNode));

	
	int choice;

	while (1)
	{
		menu();
		printf("Please enter the choice(1-7):\n");
		scanf("%d", &choice);
		if (8 == choice) break;
		switch (choice)
		{
		case 1:CreateTree(T); break;
		case 2:GetDepth(T); break;
		case 3:PreOrderTraverse(T); break;
		case 4:InOrderTraverse(T); break;
		case 5:PostOrderTraverse(T); break;
		case 6:NodeCount(T); break;
		case 7:LeafNodeCount(T); break;
		default:printf("Wrong choice !!! Please enter the correct choice!!\n");
		}
	}
	
	return 0;
}