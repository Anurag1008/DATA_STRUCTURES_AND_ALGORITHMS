//https://practice.geeksforgeeks.org/re/level-order-traversal/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

/*
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int>ans;
        queue<Node*>q;
        q.push(node);
        while(!q.empty()){
            int size = q.size();
            while(size > 0){
                Node *front = q.front();
                q.pop();
                ans.push_back(front->data);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                size--;
            }
            
        }
        return ans;
    }
};
*/