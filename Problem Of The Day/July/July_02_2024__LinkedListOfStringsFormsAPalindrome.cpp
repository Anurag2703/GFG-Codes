// Level: EASY

class Solution {
    public:
        bool compute(Node* head) {
            string v="";
            int i=0;
            Node *p = head;
            
            while(p != nullptr){
                v += p->data;
                p = p->next;
            }
            
            int n = v.size();
            while(i <= n/2){
                if(v[i] != v[n-1-i])
                    return false;
                else i++;
            }
            return true;
        }

};