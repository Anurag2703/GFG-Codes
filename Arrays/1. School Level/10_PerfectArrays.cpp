class Solution {
  public:
    bool isPerfect(int n, vector<int> &arr) {
        bool x;
        for(int i=0; i<n; i++){
            if(arr[i] != arr[n-i-1])
                return false;
        }
        
        return true;
    }
};