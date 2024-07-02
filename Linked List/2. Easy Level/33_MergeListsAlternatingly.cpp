// complete this function
void mergeList(struct Node **p, struct Node **q){
    Node *t1 = *p, *t2 = *q;
    while(t1 && t2){
        Node *f = t1->next;
        t1->next = t2;
        
        Node *g = t2->next;
        t2->next = f;
        t1 = f;
        t2 = g;
    }
    *q = t2;
}