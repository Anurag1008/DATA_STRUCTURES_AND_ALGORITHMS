
//https://practice.geeksforgeeks.org/problems/largest-independent-set-problem/1

//Largest Independent Set Problem

//Recurssion + memorization
/*
int MLIS(Node* root,unordered_map<Node*,int>&mp){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    if(mp[root]) return mp[root];
    int pick =1;
    if(root->left){ pick+=MLIS(root->left->left,mp) + MLIS(root->left->right,mp);}
    if(root->right){ pick+=MLIS(root->right->left,mp) + MLIS(root->right->right,mp);}
    int notpick = MLIS(root->left,mp) + MLIS(root->right,mp);
    return mp[root] =  max(pick,notpick);
}

int LISS(Node *root)
{
    unordered_map<Node*,int>mp;
    return MLIS(root,mp);
}
*/

//only Recurssion
/*
int MLIS(Node* root){
    if(root==NULL) return 0;
    //if(root->left!=NULL && root->right!=NULL) return 1;
    int pick =1;
    if(root->left){ pick+=MLIS(root->left->left) + MLIS(root->left->right);}
    if(root->right){ pick+=MLIS(root->right->left) + MLIS(root->right->right);}
    int notpick = MLIS(root->left) + MLIS(root->right);
    return max(pick,notpick);
}

int LISS(Node *root)
{
    return MLIS(root);
    
}
*/