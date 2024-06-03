// Complete this function
class Solution{
    public:
        void deleteAlt(struct Node *head){
            Node *p = head;
            while(p!=nullptr && p->next!=nullptr){
                Node* q;
                q = p->next;
                p->next = p->next->next;
                delete q;
                p = p->next;
            }
        }
};