// Level: EASY

class Solution {
    public:
        int findExtra(int n, int arr1[], int arr2[]) {
            int low = 0, high = n-1;
            int ans = -1;
            while(low < high){
                int mid = low + (high-low)/2;
                if(arr1[mid] == arr2[mid]){
                    low = mid+1;
                }else{
                    ans = mid;  // potential answer
                    high = mid;
                }
            }
            if(ans == -1) return n-1; //Edge case (Special Case)
            return ans;
        }
};