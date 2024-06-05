//Function to find the data of nth node from the end of a linked list.
class Solution{
    public:
        int getNthFromLast(Node *head, int n){
            int s=0;
            Node *r = head;
            Node *p = head;
            while(p != nullptr){
                if(s >= n)
                    r = r->next;
                
                s++;
                p = p->next;
            }
            int x = s<n? -1 : r->data;
            return x;
        }
};