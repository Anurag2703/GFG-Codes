// Compare two strings represented as linked lists
int compare(Node *list1, Node *list2) {
    Node *c1=list1, *c2=list2;
    
    for(; (c1 && c2); c1=c1->next, c2=c2->next){
        if(c1->c < c2->c)
            return -1;
        
        if(c1->c > c2->c)
            return 1;
    }
    
    if(c1 && !c2)
        return -1;
    if(!c1 && c2)
        return 1;
        
    return 0;
}