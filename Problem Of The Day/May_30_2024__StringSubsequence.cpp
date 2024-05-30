// Level: MEDIUM

class Solution {
    private:
        int mod = 1e9 + 7;
        vector<vector<int>>dp;
        
    public:
        int solve(int i, int j, int n, int m, string &s1, string &s2){
            if(j == m)
                return 1;
            if(i == n)
                return 0;
            if(dp[i][j] != -1)
                return dp[i][j];
                
            int result=0;
            if(s1[i] == s2[j])
                result = (result%mod + solve(i+1, j+1, n, m, s1, s2)%mod)%mod;
                
            result = (result%mod + solve(i+1, j, n, m, s1, s2)%mod)%mod;
            return (dp[i][j] = result);
        }
        
        // Question Function
        int countWays(string s1, string s2) {
            int n=s1.size(), m=s2.size();
            dp = vector<vector<int>>(n+1, vector<int>(m+1, -1));
            
            return solve(0, 0, n, m, s1, s2);
        }
};