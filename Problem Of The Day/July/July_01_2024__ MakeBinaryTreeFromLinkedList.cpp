// Level: MEDIUM

void createTree(Node*h,stack<TreeNode*> &stk){
    if(!h) return;
    TreeNode * root = stk.top();
    stk.pop();

    root->left = new TreeNode(h->data);
    stk.push(root->left);
    
    h=h->next;
    if(h != NULL){
        root->right = new TreeNode(h->data);
        stk.push(root->right);
    }else{
        return;
    }
    
    h=h->next;
    createTree(h,stk);
}

// Function to make binary tree from linked list.
void convert(Node *head, TreeNode *&root) {
    if(!head) 
        return;
    
    stack<TreeNode*> stk;
    root = new TreeNode(head->data);
    stk.push(root);
    
    createTree(head->next,stk);
}