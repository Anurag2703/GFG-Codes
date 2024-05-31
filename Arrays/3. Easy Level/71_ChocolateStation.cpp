class Solution {
    public:
        int getChocolateCost(vector<int> arr, int chocolateMrp){
            int x = *max_element(arr.begin(), arr.end());
            return (x * chocolateMrp);
        }
};