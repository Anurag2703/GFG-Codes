// Level: MEDIUM

class Solution {
    private:
        void rev(int k, vector<int>&m){
            int n = m.size();
            k %= n;
            reverse(m.begin(), m.end());
            reverse(m.begin(), m.end()-k);
            reverse(m.end()-k, m.end());
        }
        
    public:
        vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
            int n = mat.size();
            for(int i=0; i<n; i++)
                rev(k, mat[i]);
                
            return mat;
        }
};