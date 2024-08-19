// Level: MEDIUM

class Solution {
    public:
        // arr : given array
        // k : find kth smallest element and return using this function
        int kthSmallest(vector<int> &arr, int k) {
            // code here
            nth_element(arr.begin(), arr.begin()+(k-1),arr.end());
            
            return arr[k-1];
        }
};