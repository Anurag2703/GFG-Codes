class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        return arr[0];
    }
};