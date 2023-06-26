
// 108. Convert Sorted Array to Binary Search Tree


// class Solution {
// public:
//     //create a BST using binary search tree
//     TreeNode *BST(int left ,int right, vector<int>&nums){
//         if(left > right) return nullptr;
//         int mid = left+(right - left)/2;
//         TreeNode *root = new TreeNode(nums[mid]);
//         root->left = BST(left,mid-1,nums);
//         root->right = BST(mid+1,right,nums);
//         return root;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         return BST(0,nums.size()-1,nums);
//     }
// };