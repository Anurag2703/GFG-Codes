// Level: MEDIUM

/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
    public:
        // Function to rotate a linked list.
        Node* rotate(Node* head, int k) {
            // Your code here
            int size = 1;
            if(!head) 
                return NULL;
            
            Node *newHead = head;
            Node *prev = NULL;
            
            Node *tail = head;
            while(tail->next) {
                tail = tail->next;
                size++;
            }
            
            if(size == k) 
                return head;
            
            for(int i = 0 ; i < k ; i ++) {
                prev = newHead;
                newHead = newHead->next;
            }
        
            prev->next = NULL;
            tail->next = head;
            return newHead;
        }
};