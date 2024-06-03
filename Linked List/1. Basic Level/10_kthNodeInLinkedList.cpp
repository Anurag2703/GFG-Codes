int fractional_node(struct Node *head, int k){
    struct Node *temp=head,*q=head;
    int ans=-1,index;
    int c=0,n=0;
    while(temp){
        n++;
        temp=temp->next;
    }
    
    if(n%k==0)
       index=n/k; 
    else index=(n/k)+1;
    
    while(q){
        c++;
        if(c==index)
            ans = q->data;
        q = q->next;
    }
    
    return ans;
}