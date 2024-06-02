class Solution{
    public:
        //Function to insert a node at the beginning of the linked list.
        Node *insertAtBegining(Node *head, int x) {
            if(head == nullptr)
                return new Node(x);
                
            Node *temp = new Node(x);
            temp->next = head;
            return temp;
        }


        //Function to insert a node at the end of the linked list.
        Node *insertAtEnd(Node *head, int x)  {
            if(head == nullptr)
                return new Node(x);
                
            Node *ptr = head;
            while(ptr->next != nullptr)
                ptr = ptr->next;
                
            Node *last = new Node(x);
            ptr->next = last;
            return head;
        }
};