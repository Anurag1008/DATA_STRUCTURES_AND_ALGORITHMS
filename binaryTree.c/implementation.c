#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void insert(struct Node** root, int val) {
    if (*root == NULL) {
        *root = newNode(val);
        return;
    }
    
    if (val < (*root)->data) {
        insert(&((*root)->left), val);
    } else {
        insert(&((*root)->right), val);
    }
}
void inorder(struct Node* root){
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void Insert(struct Node** root, int val, int pos) {
    if ((*root) == NULL) {
        (*root) = newNode(val);
        return;
    }
    if (pos == 0) {
        if ((*root)->left == NULL) {
            (*root)->left = newNode(val);
        } else {
            Insert(&((*root)->left), val, pos);
        }
    } else {
        if ((*root)->right == NULL) {
            (*root)->right = newNode(val);
        } else {
            Insert(&((*root)->right), val, pos);
        }
    }
}


int main(){
    struct Node* root = NULL;
    /*
    insert(&root,2);
    insert(&root,4);
    insert(&root,8);
    */
    Insert(&root,7,0);
    Insert(&root,45,0);
    Insert(&root,5,1);
    Insert(&root,7,0);
    Insert(&root,23,0);
    Insert(&root,3,1);

    Insert(&root,14,0);


    inorder(root);
    return 0;
}
