class Solution{
    public:
         //Function to find first node if the linked list has a loop.
        int findFirstNode(Node* head){
            map<Node *, int>mp;
            mp[head]++;
            while(head){
                mp[head->next]++;
                
                if(mp[head->next] == 2)
                    return head->next->data;
                    
                head = head->next;
            }
            return -1;
        }
};