
//Diagonal Traversal of Binary Tree

//https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//using queue

/*
vector<int> diagonal(Node *root)
{
   queue<Node*>q;
   q.push(root);
   vector<int>ans;
   while(!q.empty()){
       int size = q.size();
       while(size--){
           Node* front = q.front();
           q.pop();
           while(front){
               ans.push_back(front->data);
               if(front->left) q.push(front->left);
               front = front->right;
           }
       }
   }
   return ans;
}
*/

//using recursion
/*
With the help of hashmap with storing dist of each map<int,vector<int>>mp
*/