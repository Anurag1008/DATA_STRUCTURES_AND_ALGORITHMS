/*

https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1

Right View of Binary Tree

class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    //Using Recurssion
    
    vector<int> rightView(Node *root)
    {
       vector<int>ans;
       if(root == NULL) return ans;
       queue<Node*>q;
       q.push(root);
       while(!q.empty()){
           int size = q.size();
           for(int i = 1;i <= size;i++){
               Node* front = q.front();
               q.pop();
               if(i == size) ans.push_back(front->data);
               if(front->left) q.push(front->left);
               if(front->right) q.push(front->right);
           }
       }
       return ans;
    }
};


*/