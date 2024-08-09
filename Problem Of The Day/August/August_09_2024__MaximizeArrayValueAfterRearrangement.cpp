// Level: EASY

class Solution {
    public:
        long long int MOD = 1000000007;
        
        
        int Maximize(vector<int> &arr) {
            // Complete the function
            long long int sum = 0;
            sort(arr.begin(), arr.end());
            
            for(long long int i=0; i<arr.size(); i++){
                sum = sum + (arr[i]*i);
            }
            
            return sum%MOD;
        }
};