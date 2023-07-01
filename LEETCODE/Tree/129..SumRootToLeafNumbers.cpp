//129. Sum Root to Leaf Numbers

// class Solution {
// public:
//     string s = "";
//     long long int ans = 0;
//     void traverse(TreeNode* root){
//         if(root == NULL) return;
//         s+=(to_string(root->val));
//         traverse(root->left);
//         traverse(root->right);
//         if(root->left == NULL && root->right == NULL) ans+=stoi(s);
//         s.pop_back();
//     }
//     int sumNumbers(TreeNode* root) {
//         //here we going to traverse in Preorder traversal way
//         traverse(root);
//         return ans;
//     }
// };