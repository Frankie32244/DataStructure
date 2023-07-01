#include<stdio.h>
#include<stdlib.h>
#include"binarytree.h"


void createBiTree(TreeNode* T,int* nums,int size,int index){
    if(index >= size){
        T = NULL;
        return;
    }
    T = (TreeNode*)malloc(sizeof(TreeNode));

    if(nums[index] == -1){
        T = NULL;
    }
    createBiTree(T->left,nums,size,2 * index);
    createBiTree(T->right,nums,size,2 * index + 1);

    return;
}

int depth(TreeNode* T){
    int cnt = 0;

    if(T == NULL) return 0;

    int left_depth = depth(T->left) + 1;
    int right_depth = depth(T->right) + 1;

    return left_depth > right_depth ? left_depth : right_depth ;
}

void preOrderTraverse(TreeNode* T){
    if(T != NULL){
        printf("%d ",T->data);
        preOrderTraverse(T->left);
        preOrderTraverse(T->right);
    }
}

void inOrderTraverse(TreeNode* T){
    if(T != NULL){
        inOrderTraverse(T->left);
        printf("%d ",T->data);
        inOrderTraverse(T->right);
    }
}

void postOrderTraverse(TreeNode* T){
    if(T != NULL){
        postOrderTraverse(T->left);
        postOrderTraverse(T->right);
        printf("%d ",T->data);
    }
}

int nodeCount(TreeNode* T){
    if(T != NULL){
        return nodeCount(T->left) + nodeCount(T->right) + 1;
    }
    return 0;
}

int leafNodeCount(TreeNode* T){
    if(T != NULL)
        return 0;
    
    if(T->left == NULL && T->right ==NULL)
        return 1;

    if(T->left != NULL || T->right != NULL)
        return leafNodeCount(T->left) + leafNodeCount(T->right);
}