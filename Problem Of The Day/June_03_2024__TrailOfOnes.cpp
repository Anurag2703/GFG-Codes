// Level: EASY

class Solution {
    public:
        int numberOfConsecutiveOnes(int n) {
            int mod = 1e9+7;
            int dp[n+1];
            dp[0]=0;
            dp[1]=0;
            dp[2]=1;
            
            if(n<3)
                return dp[n];
            
            int a=0, b=1;
            for(int i=3; i<=n; i++){
                int c = (a+b)%mod;
                dp[i] = (dp[i-1] * 2)%mod + c%mod;
                
                dp[i] = dp[i]%mod;
                a = b;
                b = c;
            }
            return dp[n];
        }
};