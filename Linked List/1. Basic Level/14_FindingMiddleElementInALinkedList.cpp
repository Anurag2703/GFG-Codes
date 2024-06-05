/*
Using slow and fast Pointer, Slow by one step Fast by two-step.

The logic is the length of the list is traveled fast in half iteration and 
reaches the end when the slow point to the middle.
*/

class Solution{
    public:
        /* Should return data of middle node. If linked list is empty, then  -1*/
        int getMiddle(Node *head){
            int size=0;
            Node *fast = head;
            Node *slow = head;
            
            while(fast!=nullptr && fast->next!=nullptr){
                fast = fast->next->next;
                slow = slow->next;
            }
            return slow->data;
        }
};