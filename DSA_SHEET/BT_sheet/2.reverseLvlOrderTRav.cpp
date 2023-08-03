//https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

/*
vector<int> reverseLevelOrder(Node *root)
{
    vector<int>ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        while(size--){
            Node* front  = q.front();
            q.pop();
            ans.push_back(front->data);
            if(front->right) q.push(front->right);
            if(front->left) q.push(front->left);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
*/