
//863. All Nodes Distance K in Binary Tree

/*
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*> parentTrack(TreeNode*root){
        unordered_map<TreeNode*,TreeNode*> parent;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            if(front->left){
                parent[front->left] = front;
                q.push(front->left);
            }
            if(front->right){
                parent[front->right] = front;
                q.push(front->right);
            }
        }
        return parent;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        //create a parent queue
        unordered_map<TreeNode*,TreeNode*>parent = parentTrack(root);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;
        int curr_lvl = 0;
        while(!q.empty()){
            int size = q.size();
            if(curr_lvl++ == k) break;
            for(int i=0;i<size;i++){
                TreeNode *curr = q.front(); q.pop();
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                if(parent[curr] && !visited[parent[curr]]){
                    q.push(parent[curr]);
                    visited[parent[curr]] = true;
                }
            }
        }
        vector<int>ans;
        while(!q.empty()){
            TreeNode* curr = q.front(); q.pop();
            ans.push_back(curr->val);
        }
        return ans;
    }
};
*/