long long  multiplyTwoLists (Node* l1, Node* l2){
    Node *p = l1, *q = l2;
    long long a=0, b=0;
    while(p || q){
        if(p != nullptr){
            a = (a*10)%1000000007 + p->data;
            p = p->next;
        }
        if(q != nullptr){
            b = (b*10)%1000000007 + q->data;
            q = q->next;
        }
    }
    
    return (a*b)%1000000007;
}