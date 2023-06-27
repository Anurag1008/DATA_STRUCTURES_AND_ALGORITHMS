//116. Populating Next Right Pointers in Each Node

// Time complexity :  O(N)  
// space complexity : O(N)

/*
class Solution {
public:
    Node* connect(Node* root) {
        //we have to do a level order traversal
        if(root == NULL) return root;
        Node* temp  = root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<Node*>v;
            while(size--){
                Node* front = q.front();
                q.pop();
                v.push_back(front);
                if(front->left != nullptr) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);
            }
            for(int i=0;i<v.size();i++){
                if(i+1 < v.size()){
                    v[i]->next = v[i+1];
                    v[i] = v[i+1];
                }
            }
            v[v.size()-1]->next = NULL;
            v.clear();
        }
        return root;
    }
};
*/