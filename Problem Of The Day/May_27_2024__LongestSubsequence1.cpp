class Solution {
    public:
        int longestSubseq(int n, vector<int> &a) {
            vector<int>v(n,1);
            for(int i=0; i<n; i++)
                for(int j=i; j>=0; j--)
                    if((v[i] < v[j] + 1)  &&  (a[i]-1==a[j]  ||  a[i]+1==a[j]))
                        v[i] = v[j]+1;
                        
            return (*max_element(v.begin(), v.end()));
        }
};