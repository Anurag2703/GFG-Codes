class Solution{
    public:
        Node* reverseDLL(Node * head){
            // Without using an extra node
            while(head->next != nullptr){
                swap(head->next, head->prev);
                head = head->prev;
            }
            swap(head->next, head->prev);
            return head;
        }
};