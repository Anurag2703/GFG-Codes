class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int i=0, j=1;
        
        while(i<n && j<n){
            if((abs(arr[j]-arr[i]) == x) && (i != j))
                return 1;
            
            if(arr[j]-arr[i] > x)
                i++;
            else j++;
        }
        return -1;
    }
};