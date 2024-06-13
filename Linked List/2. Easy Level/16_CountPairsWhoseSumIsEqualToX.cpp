class Solution{
    public:
        // your task is to complete this function
        int countPairs(struct Node* head1, struct Node* head2, int x) {
            vector<int> v1,v2;
            Node* temp1 = head1;
            Node* temp2 = head2;
            
            while(temp1 != NULL){
                v1.push_back(temp1->data);
                temp1 = temp1->next;
            }
            
            while(temp2 != NULL){
                v2.push_back(temp2->data);
                temp2 = temp2->next;
            }
            
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            
            int i=0, j=v2.size()-1, count=0;
            while(i<v1.size() && j>=0){
                if(v1[i]+v2[j] == x){
                    count++;
                    i++;
                    j--;
                }else if(v1[i]+v2[j] < x)
                    i++;
                else j--;
            }
            return count;
        }
};