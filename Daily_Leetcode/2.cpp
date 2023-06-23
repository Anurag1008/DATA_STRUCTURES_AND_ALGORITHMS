//BST Minimum absolute difference between two node in BST time complexity O(N)
/*
class Solution {
public:
    int minDiff = INT_MAX;
    int val = -1;
    int getMinimumDifference(TreeNode* root) {
        if(root->left != NULL) getMinimumDifference(root->left);
        if(val>=0) minDiff = min(minDiff,root->val - val);
        val = root->val;
        if(root->right != NULL) getMinimumDifference(root->right);
        return minDiff;
    }
};
*/