class Solution{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head){
            long long unsigned int sum=0;
            while(head){
                sum = ((sum*2) + head->data) % MOD;
                head = head->next;
            }
            
            return sum;
        }
};