class Solution{   
    public:
        void segregate0and1(int arr[], int n) {
            int count=0;
            for(int i=0; i<n; i++)
                if(arr[i] != 1){
                    swap(arr[i], arr[count]);
                    count++;
                }
        }
};