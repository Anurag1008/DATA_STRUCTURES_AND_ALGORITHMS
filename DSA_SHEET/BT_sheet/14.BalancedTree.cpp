/*

https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

***Check for Balanced Tree***

\\Recursion//

class Solution{
    public:
    int height(Node* root){
        if(root == NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return max(left,right) + 1;
    }
    bool isbalanced(Node* root){
        if(root == NULL) return true;
        int leftH = height(root->left);
        int rightH = height(root->right);
        
        bool leftbalanced = isbalanced(root->left);
        bool rightbalanced = isbalanced(root->right);
        
        bool diff = abs(leftH - rightH) <= 1;
        
        return leftbalanced && rightbalanced && diff;
    }
    bool isBalanced(Node *root)
    {
        return isbalanced(root);
    }
};

\\Hashmap and Recurssion//

class Solution
{
public:
    // Function to check whether a binary tree is balanced or not.
    pair<bool, int> isbalancedFast(Node *root)
    {
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        pair<int, int> left = isbalancedFast(root->left);
        pair<int, int> right = isbalancedFast(root->right);

        bool leftans = left.first;
        bool rightans = right.first;

        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;
        if (leftans && rightans && diff)
            ans.first = true;
        else
            ans.first = false;

        return ans;
    }

    bool isBalanced(Node *root)
    {
        return isbalancedFast(root).first;
    }
};
*/