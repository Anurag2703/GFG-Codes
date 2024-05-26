class Solution {
    public:
        int LCS(string x, string y){
            int n=x.size(), m=y.size();
            vector<vector<int>> dp(n+1,vector<int>(m+1));
            
            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++){
                    if(x[i] == y[j])
                        dp[i+1][j+1] = 1 + dp[i][j];
                    else dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
                }
            return dp[n][m];
        }
        
        // Function asked by the question
        int findMinCost(string x, string y, int costX, int costY) {
            int lcs = LCS(x,y);
            int n = x.size() - lcs;
            int m = y.size() - lcs;
            return (costX*n + costY*m);
        }
    };