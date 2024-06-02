class Solution{
    public:
        void display(Node *head){
            Node *p = head;
            do{
                cout << p->data << " ";
                p = p->next;
            }while(p->next != nullptr);
            cout << p->data << " ";
        }
};