// Level: MEDIUM

/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
    public:
        int sum = 0;
        
        bool isLeafNode(Node* root) {
            return !root->left && !root->right;
        }
    
        bool isSumTree(Node* root) {
            // Your code here
            if(!root) 
                return 1;
            
            sum = 0; // so that left subtree sum starts with 0
            
            if(!isSumTree(root->left)) 
                return 0;
            
            int sumLeft = sum;
            sum = 0;
            
            if(!isSumTree(root->right)) 
                return 0;
            
            int sumRight = sum; // so that right subtree sum starts with 0
            sum = sumLeft + sumRight + root->data; // assign the current sum of subtree to sum variable
            
            return isLeafNode(root) || sumLeft + sumRight == root->data; // according to given condition
        }
};