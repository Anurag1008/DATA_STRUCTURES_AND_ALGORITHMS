#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to find the kth ancestor of the given node using iterative approach
int kthAncestor(TreeNode *root, int node, int k)
{
    // Initialize a stack to keep track of the path from the root to the target node
    stack<TreeNode *> s;
    vector<int> ancestors;
    bool found = false;

    // Traverse the binary tree from the root node
    while (root != NULL || !s.empty())
    {
        // If the current node is not NULL, push it onto the stack and move to its left child
        if (root != NULL)
        {
            s.push(root);
            root = root->left;
        }
        // If the current node is NULL, pop the top element from the stack
        // If the top element is the target node, break out of the loop
        // Otherwise, move to its right child
        else
        {
            TreeNode *temp = s.top();
            if (temp->right == NULL)
                s.pop();
            if (temp->val == node)
            {
                found = true;
                break;
            }
            if (temp->right != NULL)
            {
                ancestors.push_back(temp->val);
                root = temp->right;
            }
        }
    }

    // If the target node is not found, return -1
    if (!found)
    {
        return -1;
    }

    // Pop elements from the stack and add their values to the ancestors vector
    // until we reach the kth ancestor or the stack becomes empty
    while (!s.empty() && k > 0)
    {
        TreeNode *temp = s.top();
        s.pop();
        ancestors.push_back(temp->val);
        k--;
    }

    // If the stack becomes empty before we reach the kth ancestor, return -1
    if (k > 0)
    {
        return -1;
    }

    // Return the value of the kth ancestor
    return ancestors.back();
}

// Driver code
int main()
{
    /*
        Example tree:
               1
             /   \
            2     3
           / \
          4   5
    */
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(9);
    root->left->right = new TreeNode(10);
    root->right->left = new TreeNode(1);

    int node = 10;
    int k = 1;

    int kthAncestorVal = kthAncestor(root, node, k);

    cout << "The " << k << "th ancestor of node " << node << " is " << kthAncestorVal << endl;

    return 0;
}
// This code is contributed by Veerendra_Singh_Rajpoot

