//https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
/*
class Solution{
    public:
    //Function to find the height of a binary tree.
    int ans = 0;
    int dfs(struct Node* root){
        if(root == NULL) return 0;
        int leftH = dfs(root->left);
        int rightH = dfs(root->right);
        if(leftH > rightH) return 1+leftH;
        else return 1+rightH;
    }
    int height(struct Node* node){
        return dfs(node);
    }
};
*/