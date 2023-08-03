//https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

/*
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    //first calculate the height
    
    int height(Node* root){
        if(root == NULL) return 0;
        else{
            int lH = height(root->left);
            int rH = height(root->right);
            return max(lH,rH) + 1;
        }
    }
    
    int diameter(Node* root) {
        if(root == NULL) return 0;
        int hl = height(root->left);
        int hr = height(root->right);
        int dimeterL = diameter(root->left);
        int dimeterR = diameter(root->right);
        return max(hl+hr+1,max(dimeterL,dimeterR));
    }
};
*/