//111. Minimum Depth of Binary Tree

/*
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        queue<pair<TreeNode*,int>>q;
        int lvl = 0;
        q.push({root,lvl});
        while(!q.empty()){
            int size = q.size();
            lvl++;
            while(size--){
                pair<TreeNode*,int> front = q.front();
                q.pop();
                if(front.first->left == NULL && front.first->right == NULL) return lvl;
                if(front.first->left){
                    q.push({front.first->left,lvl});
                }
                if(front.first->right){
                    q.push({front.first->right,lvl});
                    
                }
            }
        }
        return lvl - 1 ;
    }
};
*/