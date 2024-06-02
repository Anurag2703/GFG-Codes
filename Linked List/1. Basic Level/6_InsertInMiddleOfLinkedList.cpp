//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x){
    Node *node = new Node(x);
    Node *p = head;
    Node *q = head;
    int n=1;
    while(q->next != nullptr){
        q = q->next;
        n++;
    }
    
    int count=1;
    if(n%2 == 0)
        while(count != (n/2)){
            p = p->next;
            count++;
        }
    else
        while(count != ((n+1)/2)){
            p = p->next;
            count++;
        }
        
    node->next = p->next;
    p->next = node;
    return head;
}