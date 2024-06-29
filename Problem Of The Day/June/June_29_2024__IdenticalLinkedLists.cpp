// Level: BASIC

bool areIdentical(struct Node *head1, struct Node *head2) {
    Node *h1 = head1, *h2 = head2;
    while(h1!=nullptr && h2!=nullptr){
        if(h1->data != h2->data)
            return false;
            
        h1 = h1->next;
        h2 = h2->next;
    }
    
    if(h1==nullptr && h2==nullptr)
        return true;
        
    return false;
}