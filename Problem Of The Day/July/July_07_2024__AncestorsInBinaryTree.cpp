// Level: MEDIUM

class Solution {
    public:
        void solve(struct Node* root, int target, bool& key, vector<int>& ans){
            if (root == nullptr || key==true) return;
            
            if (key == false){
                solve(root->left, target, key, ans);
                solve(root->right, target, key, ans);
            }
            
            if (key == true){
                ans.push_back(root->data);
            }
            
            if (target == root->data){
                key = true;
            }
            
        }
        
        // Function should return all the ancestor of the target node
        vector<int> Ancestors(struct Node *root, int target) {
            vector<int> ans;
            bool key = false;
            
            solve(root, target, key, ans);
            return ans;
        }
};