
//https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//Boundary Traversal

/*
class Solution {
public:
    
    //printing leaf Node
    void leaf(Node* root,vector<int>&ans){
        if(root == NULL) return;
        leaf(root->left,ans);
        if(!(root->left) && !(root->right)) ans.push_back(root->data);
        leaf(root->right,ans);
    }
   
    void left(Node* root,vector<int>&ans){
        if(root == NULL) return;
        if(root->left){
            ans.push_back(root->data);
            left(root->left,ans);
        }
        else if(root->right){
            ans.push_back(root->data);
            left(root->right,ans);
        }
    }
    
    //printing right in bottom up way
    void right(Node* root,vector<int>&ans){
        if(root == NULL) return;
        if(root->right){
            right(root->right,ans);
            ans.push_back(root->data);
        }
        else if(root->left){
            right(root->left,ans);
            ans.push_back(root->data);
        }
    }
    void boundary(Node* root,vector<int>&ans){
        if(root == NULL) return;
        ans.push_back(root->data);
        left(root->left,ans);
        leaf(root->left,ans);
        leaf(root->right,ans);
        right(root->right,ans);
    }
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        boundary(root,ans);
        return ans;
        
    }
};
*/
