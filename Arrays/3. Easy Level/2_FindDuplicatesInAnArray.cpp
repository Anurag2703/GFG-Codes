class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        map<int,int>m;
        vector<int>v;
        
        for(int i=0; i<n; i++)
            m[arr[i]]++;
            
        for(auto i : m)
            if(i.second >= 2)
                v.push_back(i.first);
                
        return (v.empty()?vector<int>{-1}:v);   // Tarnery Operator used
    }
};