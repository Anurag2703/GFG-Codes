// Level: MEDIUM

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
    public:
        // Function to construct binary tree from parent array.
        Node *createTree(vector<int> parent) {
            unordered_map<int, Node*> map;
            Node* root;
            for(int i=0; i<parent.size(); ++i){
                if(parent[i]==-1){
                    if(!map.count(i)){
                        map[i]=new Node(i);
                    }
                    root=map[i];
                }else{
                    if(!map.count(i)){
                        map[i]=new Node(i);
                    }
                    if(!map.count(parent[i])){
                        map[parent[i]]=new Node(parent[i]);
                    }
                    if(map[parent[i]]->left==NULL){
                        map[parent[i]]->left=map[i];
                    }else{
                        map[parent[i]]->right=map[i];
                    }
                }
            }
            return root;
        }
};