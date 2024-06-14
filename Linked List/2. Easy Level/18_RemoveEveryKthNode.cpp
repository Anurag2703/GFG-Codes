class Solution {
    public:
        Node* deleteK(Node *head,int k){
            if(k == 1)
                return nullptr;
                
            Node *p = head;
            int x=2;
            while(p){
                if(x==k && p->next){
                    p->next = p->next->next;
                    x=2;
                }else x++;
                
                p = p->next;
            }
            return head;
        }
};