class Solution{
    public:
        vector<int> PosNegPair(int a[], int n) {
            vector<int>v;
            vector<int>res;
            unordered_map<int,int>mp;
            for(int i=0;i<n;i++){
                if(a[i]<0)
                    v.push_back(a[i]);
                else mp[a[i]]++;
            }
            
            sort(v.begin(),v.end(),greater<int>());
            for(int i=0;i<v.size();i++){
                int key=abs(v[i]);
                auto it=mp.find(key);
                if(it!=mp.end())
                    if(it->second>=1){
                        res.push_back(v[i]);
                        res.push_back(key);
                        mp[key]--;
                }
            }
            return res;
        }
};