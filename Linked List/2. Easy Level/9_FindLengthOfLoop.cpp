//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head){
    int c=0;
    Node *s = head;
    Node *f = head;
    while(f && f->next){
        s = s->next;
        f = f->next->next;
        if(s == f){
            s = s->next;
            c++;
            while(s != f){
                c++;
                s = s->next;
            }
            break;
        }
    }
    return c;
}