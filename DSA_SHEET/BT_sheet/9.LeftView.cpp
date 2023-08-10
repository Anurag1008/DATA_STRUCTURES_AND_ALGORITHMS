/*
https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

Left View of Binary Tree

** using queue next time using recussion
vector<int> leftView(Node *root)
{
   vector<int>ans;
   if(root == NULL) return ans;
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
       int size = q.size();
       for(int i=1;i<=size;i++){
           Node* front = q.front();
           q.pop();
           if(i == 1) ans.push_back(front->data);
           if(front->left) q.push(front->left);
           if(front->right) q.push(front->right);
       }
   }
   return ans;
}

*/