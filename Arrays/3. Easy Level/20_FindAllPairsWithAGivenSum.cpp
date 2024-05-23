class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        vector<pair<int,int>>ans;
        unordered_set<int>set(B, B+M);
        for(int i=0; i<N; i++){
            int key = X-A[i];
            if(set.find(key) != set.end())
                ans.push_back({A[i], key});
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};