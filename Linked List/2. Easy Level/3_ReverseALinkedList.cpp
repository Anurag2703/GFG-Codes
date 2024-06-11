class Solution{
    public:
        //Function to reverse a linked list.
        struct Node* reverseList(struct Node *head){
            Node *p = head;
            Node *prev = nullptr;
            while(p != nullptr){
                Node *front = p->next;
                p->next = prev;
                prev = p;
                p = front;
            }
            return prev;
        }
};