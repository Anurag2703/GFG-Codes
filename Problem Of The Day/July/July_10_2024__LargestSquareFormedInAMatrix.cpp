// Level: MEDIUM

class Solution {
    public:
        int maxSquare(int n, int m, vector<vector<int>> mat) {
            vector<vector<int>>dp(n, vector<int>(m,0));
            
            int MaximSize = 0;
            for(int i=0; i<n; ++i){
                dp[i][0] = mat[i][0];
                MaximSize = max(MaximSize, dp[i][0]);
            }
            
            for (int j = 0; j < m; ++j) {
                dp[0][j] = mat[0][j];
                MaximSize = max(MaximSize, dp[0][j]);
            }
    
            for (int i = 1; i < n; ++i) {
                for (int j = 1; j < m; ++j) {
                    if (mat[i][j] == 1) {
                        dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                        MaximSize = max(MaximSize, dp[i][j]);
                    }
                }
            }
            return MaximSize;
        }
};