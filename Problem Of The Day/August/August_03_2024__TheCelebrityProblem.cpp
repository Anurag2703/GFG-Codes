// Level: MEDIUM

class Solution {
    public:
        // Function to find if there is a celebrity in the party or not.
        int celebrity(vector<vector<int> >& mat) {
            int n=mat.size(),celeb=-1;
            for(int i=0;i<n;i++){
                int cnt=0;
                for(auto x : mat[i])
                    cnt+=x;
                    
                if(cnt == 0){
                    if(celeb != -1)
                        return -1;
                    
                    celeb=i;
                }
            }
            
            for(int i=0;i<n;i++){
                if(i == celeb)
                    continue;
                    
                if(mat[i][celeb] != 1)
                    return -1;
            }
            
            return celeb;
        }
};