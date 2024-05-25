class Solution{
    public:
        vector<int> removeDuplicate(vector<int>& arr, int n){
            unordered_set<int>s;
            vector<int>v;
            for(int i=0; i<n; i++)
                if(s.find(arr[i]) == s.end()){
                    s.insert(arr[i]);
                    v.push_back(arr[i]);
                }
            return v;
        }
};