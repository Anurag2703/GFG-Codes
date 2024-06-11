/*You are required to complete below method*/
Node* deleteNode(Node *head,int x){
    if(head == nullptr)
        return nullptr;
    
    if(x == 1){
        head = head->next;
        return head;
    }
    
    Node *p = head;
    int count=1;
    while(p->next != nullptr){
        if(count == x-1){
            Node *r = p->next;
            p->next = r->next;
            delete r;
            return head;
        }else{
            count++;
            p = p->next;
        }
    }
    return head;
}