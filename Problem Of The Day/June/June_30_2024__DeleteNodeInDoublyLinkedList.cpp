// Level: EASY

class Solution {
    public:
        Node *deletehead(Node *head){
            if(head==nullptr || head->next==nullptr)
                return nullptr;
                
            Node *p = head;
            head = head->next;
            head->prev = nullptr;
            p->next = nullptr;
            delete p;
            
            return head;
        }
        
        Node *deletelast(Node *head){
            if(head==nullptr || head->next==nullptr)
                return nullptr;
            
            Node *p = head;
            while(p->next != nullptr)
                p = p->next;
            
            Node *b = p->prev;
            b->next = nullptr;
            p->prev = nullptr;
            
            delete p;
            return head;
        }
        
        // Function asked by the question
        Node* deleteNode(Node* head, int x) {
            if(head == nullptr) 
                return nullptr;
            
            Node *temp = head;
            int cnt=1;
            while(temp != nullptr){
                if(cnt == x) 
                    break;
               
                cnt++;
                temp=temp->next;
            }
            
            Node* back = temp->prev;
            Node* front = temp->next;
            
            if(back==nullptr && front==nullptr){
               delete temp;
               return nullptr;
            }else if(back == nullptr){
                head=deletehead(head);
                return head;
            }else if(front==NULL){
                head=deletelast(head);
                return head;
            }
            
            back->next = front;
            front->prev = back;
            temp->next = nullptr;
            temp->prev = nullptr;
            delete temp;
            return head;
        }
};