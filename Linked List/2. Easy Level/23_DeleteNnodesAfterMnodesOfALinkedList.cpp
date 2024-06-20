class Solution{
    public:
        void linkdelete(struct Node *head, int M, int N){
            Node *p = head;
            int count=0, deleteCount=N;
            while(p){
                if(M-1 == count){
                    int num = N;
                    while(p->next){
                        if(num == 0)
                            break;
                            
                        Node *q = p->next->next;
                        num--;
                        p->next = q;
                    }
                    count=0;
                    p = p->next;
                }else{
                    count++;
                    p = p->next;
                }
            }
        }
};