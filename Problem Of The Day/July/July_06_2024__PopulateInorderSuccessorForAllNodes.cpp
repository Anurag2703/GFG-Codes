// Level: MEDIUM

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
*/
class Solution {
    public:
        unordered_map<Node*, Node*>mpp;
        vector<Node*>v;
        
        void solve(Node* root){
            if(!root) return;
            solve(root->left);
            v.push_back(root);
            solve(root->right);
        }
        
        void solve2(Node* root){
            if(!root) return;
            solve2(root->left);
            root->next=mpp[root];
            solve2(root->right);
        }
        
        // Main Function
        void populateNext(Node *root) {
            solve(root);
            int n=v.size();
            
            for(int i=0; i<n-1; i++)
                mpp[v[i]]=v[i+1];
                
            solve2(root);
        }
};