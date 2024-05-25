class Solution{   
    public:
        long long maxProduct(int arr[], int n) {
            if(n<3)
                return 0;
                
            sort(arr,arr+n);
            
            // Maximum product can be obtained by multiplying the three largest numbers
            long long maxim = (long long)arr[n-1]*arr[n-2]*arr[n-3];
            
            // If there are negative numbers, the minimum product can be obtained by multiplying
            // two smallest negative numbers with the largest positive number
            long long mini = (long long)arr[0]*arr[1]*arr[n-1];
            
            return max(maxim, mini);
        }
};