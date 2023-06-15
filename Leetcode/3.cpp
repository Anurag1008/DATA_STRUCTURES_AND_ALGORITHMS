//Maximum level sum of BinaryTree  ques no. 1161 
/*
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans = INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        int maxLvl = 1;
        int lvl = 1;
        while(!q.empty()){
            int size  = q.size();
            int lvlSum = 0;
            while(size--){
                TreeNode* front = q.front();
                q.pop();

                lvlSum+=front->val;

                if(front->left != NULL) q.push(front->left);
                if(front->right != NULL) q.push(front->right);
            }
            if(lvlSum > ans){
                ans = lvlSum;
                maxLvl  = lvl;
            }
            lvl++;
        }
        return maxLvl;
    }

};
*/