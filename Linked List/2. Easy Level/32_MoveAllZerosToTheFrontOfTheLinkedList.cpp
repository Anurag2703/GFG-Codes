// Move Zeros to the front of the list
void moveZeroes(struct Node **head){
    Node *p = nullptr;
    Node *c = *head;
    
    while(c){
        if(c->data==0 && c!=*head){
            p->next = c->next;
            c->next = *head;
            *head = c;
            c = p->next;
        }else{
            p = c;
            c = c->next;
        }
    }
}