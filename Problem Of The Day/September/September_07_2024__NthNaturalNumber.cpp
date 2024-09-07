// Level: MEDIUM

class Solution {
    public:
        long long findNth(long long n) {
            // code here.
            long long start = n;
            string ans = "";
            while(start > 0){
                int r = start % 9;
                ans += '0' + r;
                start /= 9;
            }
            
            reverse(ans.begin(), ans.end());
            
            return stoll(ans);
        }
};