
// 109. Convert Sorted List to Binary Search Tree

// class Solution {
// public:
//     TreeNode* BST(int l,int r,vector<int>&v){
//         if(l > r) return nullptr;
//         int mid = l+(r-l)/2;
//         TreeNode* root = new TreeNode(v[mid]);
//         root->left = BST(l,mid-1,v);
//         root->right = BST(mid+1,r,v);
//         return root;
//     }
//     TreeNode* sortedListToBST(ListNode* head) {
//         vector<int>v;
//         while(head!=NULL){
//             v.push_back(head->val);
//             head=head->next;
//         }
//         return BST(0,v.size()-1,v);
//     }
// };