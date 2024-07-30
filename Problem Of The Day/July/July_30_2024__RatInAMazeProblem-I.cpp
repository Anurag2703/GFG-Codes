// Level: MEDIUM

class Solution {
    public:
        vector<string> v;
        string res="";
        void path(vector<vector<int>> &mat, int i, int j, int n){
            if(mat[i][j]==0) 
                return;
            if(i==n-1 && j==n-1){
                v.push_back(res);
                return;
            }
            
            mat[i][j]=0;
            
            if(j<n-1 && mat[i][j+1]==1){
                res+='R';
                path(mat,i,j+1,n);
                res.pop_back();
            }
            
            if(i<n-1 && mat[i+1][j]==1){
                res+='D';
                path(mat,i+1,j,n);
                res.pop_back();
            }
            
            if(j>0 && mat[i][j-1]==1){
                res+='L';
                path(mat,i,j-1,n);
                res.pop_back();
            }

            if(i>0 && mat[i-1][j]==1){
                res+='U';
                path(mat,i-1,j,n);
                res.pop_back();
            }
            
            mat[i][j]=1;
        }

        // complete the function
        vector<string> findPath(vector<vector<int>> &mat) {
            int n=mat.size();
            path(mat,0,0,n);
            return v;
        }
};