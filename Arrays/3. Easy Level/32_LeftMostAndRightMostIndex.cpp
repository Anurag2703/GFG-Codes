class Solution{
    public:
        pair<long,long> indexes(vector<long long> v, long long x){
            pair<long,long>r{-1,-1};
            for(int i=0; i<v.size(); i++)
                if(v[i] == x){
                    if(r.first == -1)
                        r.first = i;
                    
                    r.second = i;
                }
            return r;
        }
};