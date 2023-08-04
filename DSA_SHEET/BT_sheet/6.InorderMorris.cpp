/*

https://practice.geeksforgeeks.org/problems/inorder-traversal/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

Time complexity : O(N)
Space complexity : O(1)

class Solution {
  public:
  
    //using iteration  -> Morris Traversal
    vector<int> inOrder(Node* root) {
        vector<int>inorder;
        Node* curr = root;
        while(curr!=NULL){
            if(curr->left == NULL){
                inorder.push_back(curr->data);
                curr=curr->right;
            }
            else{
                //creating a threaded connection
                Node* prev = curr->left;
                while(prev->right && prev->right!=curr){
                    prev = prev->right;
                }
                if(prev->right == NULL){
                    prev->right = curr;
                    curr = curr->left;
                }
                else{
                    prev->right = NULL;
                    inorder.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }
        return inorder;
    }
};

*/