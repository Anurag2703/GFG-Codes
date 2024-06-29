class Solution{
    public:
        Node *reversedLL(Node *head){
            if(head->next == nullptr)
                return head;
            
            Node *p = nullptr;
            Node *t = head;
            Node *n = nullptr;
            
            while(t){
                n = t->next;
                t->next = p;
                p = t;
                t = n;
            }
            return p;
        }
        
        // Question Function
        Node *reverse(Node *head, int k){
            if(head->next == nullptr)
                return head;
                
            Node *t = head;
            Node *h1 = head;
            Node *h2 = nullptr;
            
            for(int i=1; i<k; i++)
                t = t->next;
                
            h2 = t->next;
            t->next = nullptr;
            
            Node *r = reversedLL(h1);
            Node *s = reversedLL(h2);
            
            head->next = s;
            return r;
        }
};