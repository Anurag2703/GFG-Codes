int modularNode(Node* head, int k){
    int r=-1, i=1;
    Node *p = head;
    while(p != nullptr){
        if(i%k == 0)
            r = p->data;
        p = p->next;
        i++;
    }
    return r;
}