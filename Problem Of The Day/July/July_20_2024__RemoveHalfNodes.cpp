// Level: EASY

// Return the root of the modified tree after removing all the half nodes.
class Solution {
    public:
        Node *RemoveHalfNodes(Node *root) {
            if(root->left==nullptr &&  root->right==nullptr)
                return root;
            
            int cheak=0;
            if(!(root->left))
                   cheak=1;
            if(!(root->right))
                  cheak=1;
            if(cheak){
                  Node* ptr;
                    if(root->left){
                        ptr=RemoveHalfNodes(root->left);
                        return ptr;
                    }else{ 
                        ptr=RemoveHalfNodes(root->right);
                        return ptr;
                    }
            }else {
                 root->left=RemoveHalfNodes(root->left);
                 root->right=RemoveHalfNodes(root->right);
                 return root;
            }
        }
};