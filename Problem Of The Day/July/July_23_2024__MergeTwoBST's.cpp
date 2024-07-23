// Level: MEDIUM

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
    public:
        void in( Node *root ,vector<int>&ans){
            if(!root)
                return;
            
            in(root->left,ans);
            ans.push_back( root->data);
            in(root->right,ans);
        }
        
        // Function to return a list of integers denoting the node
        // values of both the BST in a sorted order.
        vector<int> merge(Node *root1, Node *root2) {
            vector<int>v;
            in(root1, v);
            in(root2, v);
            
            sort(v.begin(), v.end());
            return v;
        }
};