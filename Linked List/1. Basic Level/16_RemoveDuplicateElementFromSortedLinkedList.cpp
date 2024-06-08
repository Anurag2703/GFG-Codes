//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head){
    if(head->next == nullptr)
        return head;
        
    Node *p = head;
    while(p->next != nullptr){
        if(p->data == p->next->data)
            p->next = p->next->next;
        else p = p->next;
    }
    return head;
}