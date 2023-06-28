#include <iostream>
#include <vector>
using namespace std;

// Construct Tree fron inorder and postOrder

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *helper(vector<int> &inorder, vector<int> &postorder, int &idx, int left, int right)
    {
        if (left > right || idx < 0)
            return NULL;
        int pivot = left;
        while (postorder[idx] != inorder[pivot])
            pivot++;
        idx--;
        TreeNode *root = new TreeNode(inorder[pivot]);

        root->right = helper(inorder, postorder, idx, pivot + 1, right);
        root->left = helper(inorder, postorder, idx, left, pivot - 1);

        return root;
    }
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int size = inorder.size();
        int idx = size - 1;
        return helper(inorder, postorder, idx, 0, size - 1);
    }
};