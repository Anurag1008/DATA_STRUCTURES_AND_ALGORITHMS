/*
https://practice.geeksforgeeks.org/problems/mirror-tree/1

//using recursion

class Solution {
  public:

    void mirror(Node* node) {
        if(node == NULL) return;
        Node * temp;
        temp = node->left;
        node->left = node->right;
        node->right = temp;
        mirror(node->left);
        mirror(node->right);
    }
};

using  bfs & queue

class Solution {
  public:

    void mirror(Node* node) {
        if(node == NULL) return;
        queue<Node*>q;
        q.push(node);
        while(!q.empty()){
            int size = q.size();
            while(size--){
                Node* front = q.front();
                q.pop();
                swap(front->left,front->right);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
        }
    }
};




*/