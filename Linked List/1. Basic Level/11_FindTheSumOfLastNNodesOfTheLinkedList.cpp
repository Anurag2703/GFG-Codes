// your task is to complete this function 
// function should return sum of last n nodes
int findLength(struct Node* head){
    int i=0;
    Node *p = head;
    while(p){
        i++;
        p = p->next;
    }
    return i;
}

// Main function (question)
int sumOfLastN_Nodes(struct Node* head, int n){
    int c = findLength(head)-n;
    
    Node *p = head;
    while(c){
        p = p->next;
        c--;
    }
    
    int sum=0;
    while(p){
        sum += p->data;
        p = p->next;
    }
    
    return sum;
}