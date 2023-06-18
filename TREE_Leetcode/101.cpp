//Symmetric tree

/*
class Solution {
public:
    //using recursion
    bool check(TreeNode* root1,TreeNode* root2)
    {
        if(root1 == NULL && root2 == NULL) return true;
        
        if(root1==NULL || root2 == NULL) return false;

        if(root1->val != root2->val) return false;
        
        if(check(root1->left,root2->right)  && check(root1->right,root2->left)) return true;
        
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        if(root->left==NULL && root->right == NULL) return true;
        if(root->left == NULL || root->right == NULL) return false;
        
        if(check(root->left,root->right)) return true;
        return false;
    }
};
*/