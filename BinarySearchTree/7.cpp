
//least common ancestor of bianry search tree

/*
Node* LCA(Node* root, int p, int q) {
        if (root == nullptr || root->data == p || root->data == q) {
            return root;
        }

        Node* left = LCA(root->left, p, q);
        Node* right = LCA(root->right, p, q);

        if (left != nullptr && right != nullptr) {
            // Both nodes found in left and right subtrees, so root is the LCA
            return root;
        }
        else if (left != nullptr) {
            // Only left node found, return the left LCA
            return left;
        }
        else if (right != nullptr) {
            // Only right node found, return the right LCA
            return right;
        }
        else {
            // Neither node found, return null
            return nullptr;
        }
    }
*/

/*
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return nullptr;
        if(root->val>p->val&&root->val>q->val) return lowestCommonAncestor(root->left,p,q);
        if(root->val<p->val&&root->val<q->val) return lowestCommonAncestor(root->right,p,q);
        return root;  
    }
};
*/