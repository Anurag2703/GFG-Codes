class Solution{
    public:
        Node* findIntersection(Node* head1, Node* head2){
            unordered_map<int,int>mp;
            Node *h1 = head1, *h2 = head2;
            while(h2 != nullptr){
                mp[h2->data]++;
                h2 = h2->next;
            }
            
            Node *r = new Node(-1);
            Node *p = r;
            while(h1 != nullptr){
                if(mp[h1->data] > 0){
                    p->next = new Node(h1->data);
                    p = p->next;
                    mp[h1->data]--;
                }
                h1 = h1->next;
            }
            
            return r->next;
        }
};