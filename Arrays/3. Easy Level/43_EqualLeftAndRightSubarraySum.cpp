class Solution {
    public:
        int equalSum(int N, vector<int> &A) {
            if(N == 1)
                return N;
            
            int left = 0, right = 0;
            for(int i=1; i<N; i++) {
                right += A[i];
            }
            
            if(right == 0) return 1;
            
            for(int i=1; i<N-1; i++) {
                right -= A[i];
                left += A[i-1];
                if(left == right) return i+1;
            }
            
            return -1;
        }
};