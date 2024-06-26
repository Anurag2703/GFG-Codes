class Solution{
    public:
        Node* pairWiseSwap(struct Node* head) {
            if(head->next == NULL)
                return head;
        
            Node *curr = head->next->next;
            Node *prev = head;
            head = head->next;
            head->next = prev;
            
            while(curr!= NULL && curr->next != NULL){
                prev->next = curr->next;
                prev = curr;
                Node *temp = curr->next->next;
                curr->next->next = curr;
                curr= temp;
            }
            
            prev->next = curr;
            return head;
        }
};