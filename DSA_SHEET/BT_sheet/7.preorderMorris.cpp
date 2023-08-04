/*

https://practice.geeksforgeeks.org/problems/preorder-traversal/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab


//using stack traversal
vector <int> preorder(Node* root)
{  
    //using queue
    vector<int>inorder;
    stack<Node*>s;
    s.push(root);
    while(!s.empty()){
        Node* front = s.top();
        s.pop();
        inorder.push_back(front->data);
        if(front->right) s.push(front->right);
        if(front->left) s.push(front->left);
    }
    return inorder;
}

//using Morris iterable traversal

vector <int> preorder(Node* root)
{  
    vector<int>preorder;
    Node* curr = root;
    while(curr!=NULL){
        if(curr->left == NULL){
            preorder.push_back(curr->data);
            curr = curr->right;
        }
        else{
            Node* pre = curr->left;
            while(pre->right && pre->right!=curr) pre=pre->right;
            if(pre->right == NULL){
                pre->right = curr;
                preorder.push_back(curr->data);
                curr = curr->left;
            }
            else{
                pre->right = NULL;
                curr = curr->right;
            }
        }
    }
    return preorder;
}

*/