// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
    int count=1;
    node *p = head;
    
    if(index == 1)
        return head->data;
    
    while(p->next != nullptr){
        p = p->next;
        count++;
        
        if(count == index)
            return p->data;
    }
}