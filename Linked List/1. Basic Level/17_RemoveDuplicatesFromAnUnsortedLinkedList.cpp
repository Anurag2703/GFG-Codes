class Solution{
    public:
        //Function to remove duplicates from unsorted linked list.
        Node * removeDuplicates( Node *head) {
            Node *p = head;
            unordered_map<int,int>mp;
            mp[p->data]++;
            
            while(p->next!=nullptr && p!=nullptr){
                if(mp.find(p->next->data) != mp.end())
                    p->next = p->next->next;
                else{
                    mp[p->next->data]++;
                    p = p->next;
                }
            }
            return head;
        }
};