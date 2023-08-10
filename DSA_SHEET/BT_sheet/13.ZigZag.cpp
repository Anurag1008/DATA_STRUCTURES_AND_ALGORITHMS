/*

https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1

ZigZag traversal of binary tree

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	//using level order traveral
    	vector<int>ans;
    	queue<Node*>q;
    	q.push(root);
    	int flag = 0;
    	vector<int>temp;
    	while(!q.empty()){
    	    int size = q.size();
    	    while(size--){
    	        Node* front = q.front();
    	        q.pop();
    	        temp.push_back(front->data);
    	        if(front->left) q.push(front->left);
    	        if(front->right) q.push(front->right);
    	    }
    	    if(flag == 0){
    	            for(auto it : temp) ans.push_back(it);
    	            flag = 1;
    	            temp.clear();
    	        }
    	        else {
    	            reverse(temp.begin(),temp.end());
    	            for(auto it : temp) ans.push_back(it);
    	            flag = 0;
    	            temp.clear();
    	        } 
    	}
    	return ans;
    }
};
*/