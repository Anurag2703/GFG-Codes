class Solution{
    public:
        // Should return head of the modified linked list
        Node *sortedInsert(struct Node* head, int data) {
            Node* temp = head;
            int flag=1;
            if(head == NULL){
                temp= new Node(data);
                return temp;
            }
            
            while(temp->next != NULL){
                if(head->data>=data){
                    temp=new Node(data);
                    temp->next=head;
                    flag=0;
                    return temp;
                }
                if(temp->data<=data && temp->next->data>=data){
                    Node* cptr = temp->next;
                    temp->next = new Node(data);
                    temp->next->next = cptr;
                    flag=0;
                    return head;
                }
                
                temp = temp->next;
            }
            
            if(flag)
                temp->next = new Node(data);

            return head;
        }
};