/* Should return true if linked list is circular, else false */
bool isCircular(Node *head){
    Node *p = head->next;
    if(head == nullptr)
        return true;
        
    while(p != nullptr){
        if(p == head)
            return true;
        
        p = p->next;
    }
    return false;
}