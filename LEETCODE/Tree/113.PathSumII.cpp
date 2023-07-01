//113. Path Sum II

#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void helper(TreeNode* root,int target,vector<int>v,vector<vector<int>>&ans){
        if(root == NULL) return;
        target-=root->val;
        v.push_back(root->val);
        if(root->left == NULL && root->right == NULL && target == 0){
            ans.push_back(v);
        }
        helper(root->left,target,v,ans);
        helper(root->right,target,v,ans);
        v.pop_back(); //can do it without poping the element too.
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(root,targetSum,v,ans);
        return ans;
    }
};