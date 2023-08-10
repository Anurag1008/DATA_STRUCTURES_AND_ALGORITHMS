/*

https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

***Bottom View BT

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        map<int,int>store;
        vector<int>ans;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            pair<Node*,int>temp = q.front();
            q.pop();
            Node* front = temp.first;
            int pos = temp.second;
            store[pos] = front->data;
            if(front->left) q.push({front->left,pos-1});
            if(front->right) q.push({front->right,pos+1});
        }
        for(auto it : store) ans.push_back(it.second);
        return ans;
    }
};

*/