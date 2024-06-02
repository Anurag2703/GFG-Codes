class Solution{
    public:
        //Function to count nodes of a linked list.
        int getCount(struct Node* head){
            int count=1;
            Node *ptr = (struct Node *)malloc(sizeof(struct Node));
            ptr->next = head->next;
            while(ptr->next != nullptr){
                ptr = ptr->next;
                count++;
            }
            return count;
        }
};