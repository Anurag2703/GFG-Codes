// Level: MEDIUM

class Solution {
    public:
        void f(Node *root,int curr,int &leftMax,int &rightMax){
            if(!root)
                return;
            
            leftMax=max(curr,leftMax);
            rightMax=min(curr,rightMax);
            f(root->left,curr+1,leftMax,rightMax);
            f(root->right,curr-1,leftMax,rightMax);
        }
    
        // Function to find the vertical width of a Binary Tree.
        int verticalWidth(Node* root) {
            if(!root)
                return 0;
            
            int leftMax=0,rightMax=0,curr=0;
            f(root,curr,leftMax,rightMax);
            
            return leftMax+abs(rightMax)+1;
        }
};