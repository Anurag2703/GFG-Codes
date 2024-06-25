/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key){
    Node *c = *head, *s = c, *p = c;
    c = c->next;
    while(c->data != key){
        p = c;
        c = c->next;
    }
    
    if(s == c)
        *head = c->next;
    p->next = c->next;
}

/* Function to reverse the linked list */
void reverse(struct Node** head_ref){
    Node *h = *head_ref, *s = h, *p = s, *c = s->next, *N = c->next;
    while(c != s){
        N = c->next;
        c->next = p;
        p = c;
        c = N;
    }
    s->next = p;
    *head_ref = p;
}