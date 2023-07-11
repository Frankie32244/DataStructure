#include<stdio.h>
#include<stdlib.h>
#include "binarytreefoo.h"


void CreateTree(TreeNode* T){
    int n ;
    printf("Please enter how many nodes you wanna create(0-10) and -1 means nullptr:");
    scanf("%d",&n);
    int nums[n];
    printf("Please enter %d numbers:\n",n);

    for(int i = 0;i < n;i++){
        scanf("%d",&nums[i]);
    }

    createBiTree(&T,nums,n,0);
    printf("Creating binarytree successfully!\n");
}

int GetDepth(TreeNode* T){
    int h = depth(T);
    printf("Depth of the tree is %d.\n",h);
}

void PreOrderTraverse(TreeNode* T){
    preOrderTraverse(T);
    printf("\n");
}

void InOrderTraverse(TreeNode* T){
    inOrderTraverse(T);
    printf("\n");
}

void PostOrderTraverse(TreeNode* T){
    postOrderTraverse(T);
    printf("\n");
}

void NodeCount(TreeNode* T){
    int cnt = nodeCount(T);
    printf("There are %d nodes in the tree.\n",cnt);
}

void LeafNodeCount(TreeNode* T){
    int cnt = leafNodeCount(T);
    printf("There are %d leafnodes in the tree.\n",cnt);
}


void menu()
{
	printf("********1.CreateTree                        2.GetDepth**********\n");
	printf("********3.PreTraverse                       4.InTraverse********\n");
	printf("********5.PostTraverse                      6.NodeCount*********\n");
	printf("********7.LeafNodeCount                     8.Exit**************\n");
}
