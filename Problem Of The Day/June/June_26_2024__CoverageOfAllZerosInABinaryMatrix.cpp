// Level: EASY

class Solution {
    public:
        int findCoverage(vector<vector<int>>& mat) {
            int c=0;
            int n=mat.size(), m=mat[0].size();
            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++){
                    if(mat[i][j] == 0){
                        if(i+1 < n)
                            c += mat[i+1][j];
                        
                        if(i-1 >= 0)
                            c += mat[i-1][j];
                        
                        if(j+1 < m)
                            c += mat[i][j+1];
                        
                        if(j-1 >= 0)
                            c += mat[i][j-1];
                    }
                }
            return c;
        }
};