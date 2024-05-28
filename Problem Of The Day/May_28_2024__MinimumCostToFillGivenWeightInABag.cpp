class Solution {
    public:
        int minimumCost(int n, int w, vector<int> &cost) {
            vector<int>r(w+1, INT_MAX);
            r[0] = 0;
            
            for(int i=0; i<n; i++)
                for(int j=i+1; j<=w; j++)
                    r[j] = min(r[j], cost[i]+r[j-i-1]);
            
            return r[w];
        }
};