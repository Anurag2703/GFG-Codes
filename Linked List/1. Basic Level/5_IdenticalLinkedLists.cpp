//Function to check whether two linked lists are identical or not. 
bool areIdentical(struct Node *head1, struct Node *head2){
    if(head1==nullptr && head2==nullptr)
        return true;
        
    if(head1!=nullptr && head2!=nullptr){
        if(head1->data != head2->data)
            return false;
    }else return false;
    
    // Function recurrsion
    return areIdentical(head1->next, head2->next);
}