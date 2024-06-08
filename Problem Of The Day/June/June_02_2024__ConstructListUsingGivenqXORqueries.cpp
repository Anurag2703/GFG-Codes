// Level: MEDIUM

class Solution {
    public:
        vector<int> constructList(int q, vector<vector<int>> &queries) {
            vector<int>v;
            v.push_back(0);
            int count=0;
            
            for(int i=0; i<q; i++){
                int a = queries[i][0];
                int b = queries[i][1];
                if(a == 0)
                    v.push_back(b^count);
                else if(a == 1)
                    count ^= b;
            }
            for(auto &i : v)
                i ^= count;
                
            sort(v.begin(), v.end());
            return v;
        }
};