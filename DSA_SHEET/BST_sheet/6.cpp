//populate inorder successor of each node
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
class Solution
{
public:
    Node* minVal(Node* root){
        Node* temp = root;
        
        if(root == NULL) return temp;
        
        while(temp->left!=NULL) temp = temp->left;
        return temp;
    }
    Node* maxVal(Node* root){
        Node* temp = root;
        if(root == NULL) return temp;
        while(temp->right!=NULL) temp = temp->right;
        return temp;
    }
    void populateNext(Node *root)
    {
        Node* empty = new Node(-1);
        
        if(root == NULL){
            return;
        }
        if(root->right){
            Node* st = root;
            Node* node = minVal(root->right);
            st->next = node;
        }
        if(root->left){
            Node* st = root;
            Node* node = maxVal(root->left);
            node->next = st;
        }
        populateNext(root->left);
        populateNext(root->right);
        
    }
};
*/