class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int high=n-1, low=0;
        while(low <= high){
            int mid = low + (high-low)/2;
            
            if(arr[mid] == k)
                return mid;
                
            if(arr[mid] < k)
                low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
};