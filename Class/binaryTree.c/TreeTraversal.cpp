
//Inorder Traversal

//Algo

// 1.push root to stack.
// 2.pop element
//   traverse right if any push it to stack
//   traverse left if nay push it to stack
// 3.repeat step 2 untill stack is not empty.


/*
class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        stack<Node*>s;
        Node* curr = root;
        while(curr!= NULL || !s.empty()){
            while(curr!=NULL){
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            ans.push_back(curr->data);
            curr = curr->right;
        }
        return ans;
    }
};
*/

//Preorder Traversal

// 1.Create an empty stack to store nodes.

// 2.Initialize a current node variable to the root of the binary tree.

// 3.Start a loop that continues until the current node becomes null and the stack becomes empty.

// 4.Inside the loop:

// ->While the current node is not null, push it onto the stack and move to its left child.
// I->f the current node is null, it means we have reached the leftmost node, so we pop a node from the stack.
// ->Print the value of the popped node.
// Set the current node to its right child.
// ->When the loop ends, the traversal is complete.


/*
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == NULL) return ans;
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            TreeNode* front = s.top();
            ans.push_back(front->val);
            s.pop();
            if(front->right) s.push(front->right);
            if(front->left ) s.push(front->left);
        }
        return ans;
    }
};
*/

//Postorder Traversal

//Algo

// 1.Create an empty stack.
// 2.Initialize a current node variable to the root of the tree.
// 3.Repeat the following steps while the current node is not null or the stack is not empty:
// ->While the current node is not null, push it onto the stack and move to its left child.
// ->If the current node is null, pop a node from the stack, print its value, and set the current node to its right child.
// 4.When the stack is empty and the current node is null, the traversal is complete.


// Here's the step-by-step breakdown of the algorithm:

// 1.Create an empty stack to store nodes.
// 2.Initialize a current node variable to the root of the binary tree.
// 3.Start a loop that continues until the current node becomes null and the stack becomes empty.
// 4.Inside the loop:
// ->While the current node is not null, push it onto the stack and move to its left child.
// ->If the current node is null, it means we have reached the leftmost node, so we pop a node from the stack.
// ->Print the value of the popped node.
// ->Set the current node to its right child.
// 5.When the loop ends, the traversal is complete.


/*
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        TreeNode* curr = root;
        TreeNode* lastVisited = NULL;
        while(curr != NULL || !s.empty()){
            while(curr != NULL){
                s.push(curr);
                curr=curr->left;
            }
            TreeNode *topNode = s.top();
            if(topNode->right!=NULL && topNode->right != lastVisited)  curr = topNode->right;
            else{
                ans.push_back(topNode->val);
                s.pop();
                lastVisited = topNode;
            }
        }
        return ans;
    }
};
*/