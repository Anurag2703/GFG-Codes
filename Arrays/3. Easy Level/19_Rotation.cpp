class Solution{
    public:	
        int findKRotation(int arr[], int n) {
            // Initialize variables to keep track of the range
            int low=0, high=n-1;
            
            // Perform Binary Search
            while(low<high){
                int mid = low + (high-low)/2;
            
            //Check if middle element > last element
                if(arr[mid]>arr[high])  //If true, then the rotation point lies to the right of the middle
                    low = mid+1;
                else high = mid;    //If false, the rotation point lies to the left of or at mid
            }
            return low;
        }
};