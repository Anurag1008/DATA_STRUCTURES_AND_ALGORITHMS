
//Deletion of Node in BST

//https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1?track=sp-bst

//Time Complexity : O(log(n))

/*
Node* inorderSucc(Node* root){
    if(root == NULL) return NULL;
    Node* temp = root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
    
}
Node *deleteNode(Node *root, int X) {
    if(root == NULL) return NULL;
    
    if(X < root->data) root->left = deleteNode(root->left,X);
    
    else if(X > root->data) root->right = deleteNode(root->right,X);
    
    else{
        //root have no child
        if(root->left == NULL && root->right == NULL) return NULL;
        //root have only left child
        else if(root->right == NULL){
            Node* temp = root->left;
            delete(root);
            return temp;
        }
        //root have only right child
        else if(root->left == NULL){
            Node* temp = root->right;
            delete(root);
            return temp;
        }
        //if root have both left and right child
        else{
            Node* temp = inorderSucc(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right,temp->data);
            
        }
    }
    return root;
}
*/

