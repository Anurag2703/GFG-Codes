// Function should return 0 is length is even else return 1
class Solution {
  public:
    int isLengthEvenOrOdd(struct Node* head) {
        int count=1;
        Node* p = head;
        
        if(head->next == nullptr)
            return 1;
        
        while(p->next != nullptr){
            p = p->next;
            count++;
        }
        
        if(count%2 == 0)
            return 0;
        else return 1;
    }
};