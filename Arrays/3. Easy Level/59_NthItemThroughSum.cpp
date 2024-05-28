class Solution{
    public:
        int nthItem(int L1, int L2, int A[], int B[], int N){
            int sum=0;
            set<int>s;
            for(int i=0; i<L1; i++)
                for(int j=0; j<L2; j++){
                    sum = A[i] + B[j];
                    s.insert(sum);
                }
                
            vector<int>r(s.begin(), s.end());
            int x;
            if(N <= r.size()){
                x = r[N-1];
                return x;
            }else return -1;
        }
};