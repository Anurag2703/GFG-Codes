// Level: MEDIUM

class Solution {
    public:
        void del(Node* &curr, Node* &next1) {
        // delete nodes one by one
            delete curr;
            delete next1;
        }
        
        Node* removeAllDuplicates(struct Node* head) {
            if (!head || !head->next) return head;
        
            Node* dummy = new Node(0); // Dummy node to simplify edge cases
            dummy->next = head;
            Node* prev = dummy;
            Node* curr = head;
        
            while (curr != nullptr && curr->next != nullptr) {
                if (curr->data == curr->next->data) {
                    // Skip all nodes with the same value
                    while (curr->next != nullptr && curr->data == curr->next->data) {
                        Node* temp = curr->next;
                        curr->next = temp->next;
                        delete temp;
                    }
                    // Remove the first duplicate node
                    prev->next = curr->next;
                    delete curr;
                    curr = prev->next;
                } else {
                    prev = curr;
                    curr = curr->next;
                }
            }
        
            Node* newHead = dummy->next;
            delete dummy;
            return newHead;
        
        }
};