void splitList(Node *head, Node **head1_ref, Node **head2_ref){
    if(head==nullptr || head->next==nullptr)
        return;
        
    Node *s = head, *f = head->next;
    while(f->next!=head && f->next->next!=head){
        s = s->next;
        f = f->next->next;
    }
    
    if(f->next->next == head){
        f = f->next;
        s = s->next;
    }
    
    *head1_ref = head;
    *head2_ref = s->next;
    
    s->next = *head1_ref;
    f->next = *head2_ref;
}