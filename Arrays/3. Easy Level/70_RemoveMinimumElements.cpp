class Solution{
    public:
    	int minRemoval(int arr[], int n) {
            // By using Binary Search
            sort(arr,arr+n);
            int maxi=INT_MIN;
            
            for(int i=0; i<n; i++){
                int num = arr[i] * 2;
                int index = upper_bound(arr+i, arr+n, num) - arr;
                maxi = max(maxi, index-i);
            }
            
            return (n-maxi);
    	}
};