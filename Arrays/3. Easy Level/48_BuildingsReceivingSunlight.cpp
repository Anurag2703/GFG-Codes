class Solution{
    public:
        int longest(int arr[],int n){
            int k=arr[0], count=0;
            if(n == 1)
                return 1;
                
            for(int i=0; i<n; i++)
                if(arr[i] >= k){
                    count++;
                    k = arr[i];
                }
                
            return count;
        }
};