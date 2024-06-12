class Solution{
    public:
        Node* findIntersection(Node* head1, Node* head2){
            unordered_map<int,int>mp;
            Node *s1 = head1;
            Node *s2 = head2;
            while(s1 != nullptr){
                mp[s1->data]++;
                s1 = s1->next;
            }
            
            Node *dummy = new Node(-1);
            Node *r = dummy;
            while(s2 != nullptr){
                if(mp.find(s2->data) != mp.end()){
                    r->next = new Node(s2->data);
                    r = r->next;
                    mp[s2->data]--;
                    if(mp[s2->data] <= 0)
                        mp.erase(s2->data);
                }
                s2 = s2->next;
            }
            return dummy->next;
        }
};