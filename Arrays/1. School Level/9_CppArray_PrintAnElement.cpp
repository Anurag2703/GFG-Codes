class Solution {
  public:
    int findElementAtIndex(int n, int key, vector<int> &arr) {
        for(int i=0; i<n; i++){
            if(i == key)
                return arr[i];
        }
    }
};