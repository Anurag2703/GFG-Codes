Node* sortedInsert(Node * head, int x){
    Node *p = head;
    Node *q = getNode(x);
    if(head->data > x){
        q->next = head;
        head->prev = q;
        return q;
    }
    
    while(p->next!=nullptr && p->next->data<=x)
        p = p->next;
        
    if(p->next!=nullptr){
        q->data = x;
        q->next = p->next;
        q->prev = p;
        p->next = q;
        q->next->prev = q;
    }else{
        p->next = q;
        q->prev = p;
    }
        
    return head;
};