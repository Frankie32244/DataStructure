#ifndef BINARYTREE_H
#define BINARYTREE_H

typedef struct {
    int data;
    struct Node* left,*right;
}TreeNode;

void createBiTree(TreeNode** T,int* nums,int nums_len,int index);

int depth(TreeNode* T);

void preOrderTraverse(TreeNode* T);

void inOrderTraverse(TreeNode* T);

void postOrderTraverse(TreeNode* T);

int nodeCount(TreeNode* T);

int leafNodeCount(TreeNode* T);



#endif