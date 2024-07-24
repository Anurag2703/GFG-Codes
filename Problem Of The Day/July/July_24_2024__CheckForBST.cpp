// Level: EASY

class Solution {
    public:
        bool check(Node* root,int mini,int maxi){
            if (!root) 
                return true;
            
            if (root->data<=mini || root->data>=maxi)
                return false;
            
            bool l=check(root->left,mini,root->data);
            bool r=check(root->right,root->data,maxi);
            if (!l || !r)
                return false;
            
            return true;
        }
        
        // Function to check whether a Binary Tree is BST or not.
        bool isBST(Node* root) {
            return check(root, INT_MIN, INT_MAX);
        }
};