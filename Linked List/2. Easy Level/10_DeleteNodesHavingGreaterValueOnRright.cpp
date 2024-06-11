class Solution{
    public:
        Node *compute(Node *head){
            if(head==nullptr || head->next==nullptr)
                return head;
                
            Node* prev = nullptr;
            Node* curr = head;
            while(curr != nullptr){
                Node* temp=curr->next;
                while(temp!=nullptr && temp->data<=curr->data)
                    temp = temp->next;
                
                if(temp == nullptr){
                    prev = curr;
                    curr = curr->next;
                }
                else if(temp!=nullptr && curr==head) {
                    curr = curr->next;
                    head = curr;
                }
                else if(temp!=nullptr && curr!=head){
                    prev->next = curr->next;
                    curr = prev->next;
                }
                        
    
            }
            return head;
        }
};