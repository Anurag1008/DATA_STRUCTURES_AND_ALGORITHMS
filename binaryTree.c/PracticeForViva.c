//practice again
#include<stdio.h>
#include<stdlib.h>

struct Tree{
    int val;
    struct Tree* left;
    struct Tree* right;
};

struct Tree *newNode(int data){
    struct Tree* temp = (struct Tree*)malloc(sizeof(struct Tree));
    temp->val = data;
    temp->left = NULL;
    temp->right = NULL;
}

void insert(struct Tree**root,int data){
    if(*root == NULL){
        *root = newNode(data);
        return 0;
    }
    if((*root)->val < data) insert(&(*root)->right,data);
    else insert(&(*root)->left,data);
}

void inorder(struct Tree * node){
    if(node == NULL) return;
    inorder(node->left);
    printf("%d ",node->val);
    inorder(node->right);
}

int main(){
    struct Tree *root = NULL;
    insert(&root,10);
    insert(&root,1);
    insert(&root,3);
    insert(&root,8);
    insert(&root,6);

    inorder(root);
    return 0;
}