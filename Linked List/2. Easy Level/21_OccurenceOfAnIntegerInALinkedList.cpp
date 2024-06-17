class Solution{
    public:
        int count(struct node* head, int search_for){
            int count=0;
            node *p = head;
            while(p != nullptr){
                if(p->data == search_for)
                    count++;
                    
                p = p->next;
            }
            
            return count;
        }
};