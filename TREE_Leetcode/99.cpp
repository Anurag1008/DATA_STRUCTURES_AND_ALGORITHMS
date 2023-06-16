//Recover bianry tree (swap two which are not at correct position)

/*
class Solution {
public:
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;
    TreeNode* prev = new TreeNode(INT_MIN);

    void recoverTree(TreeNode* root) {
        traverse(root);

        // Swap the values of the two misplaced nodes
        int temp = first->val;
        first->val = second->val;
        second->val = temp;
    }

    void traverse(TreeNode* root) {
        if (root == nullptr)
            return;

        // In-order traversal
        traverse(root->left);

        // Check for misplaced nodes
        if (first == nullptr && prev->val > root->val)
            first = prev;
        if (first != nullptr && prev->val > root->val)
            second = root;
        prev = root;

        traverse(root->right);
    }
};

*/