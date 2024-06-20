class Solution{
    public:
        ListNode *moveToFront(ListNode *head){
            if(head==nullptr || head->next==nullptr)
                return head;
            
            ListNode *p = head, *q = head->next;
            while(q!=nullptr && q->next!=nullptr){
                p = p->next;
                q = q->next;
            }
            
            p->next = nullptr;
            q->next = head;
            return q;
        }
};