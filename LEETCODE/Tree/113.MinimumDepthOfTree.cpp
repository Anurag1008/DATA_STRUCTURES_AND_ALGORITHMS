#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

//111. Minimum Depth of Binary Tree

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


//using BFS

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        queue<pair<TreeNode*,int>>q;
        int lvl = 0;
        q.push({root,lvl});
        while(!q.empty()){
            int size = q.size();
            lvl++;
            while(size--){
                pair<TreeNode*,int> front = q.front();
                q.pop();
                if(front.first->left == NULL && front.first->right == NULL) return lvl;
                if(front.first->left){
                    q.push({front.first->left,lvl});
                }
                if(front.first->right){
                    q.push({front.first->right,lvl});
                    
                }
            }
            
        }
        return lvl - 1 ;
    }
};

/*
class Solution {
    public int minDepth(TreeNode root) {
        if (root==null)
            return 0;
        else if(root.left==null && root.right == null)
            return 1;
        else if(root.left == null)
            return 1 + minDepth(root.right);
        else if(root.right == null)
            return 1 + minDepth(root.left);
        else
            return 1 + Math.min(minDepth(root.left), minDepth(root.right));
    }
}
*/

