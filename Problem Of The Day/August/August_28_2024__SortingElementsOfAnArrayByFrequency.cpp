// Level: MEDIUM

class Solution {
    public:
        // Complete this function
        // Function to sort the array according to frequency of elements.
        vector<int> sortByFreq(vector<int>& arr) {
            // Your code here
            map<int,int>mp;
            for(auto i : arr)
                mp[i]++;
                
            vector<pair<int,int>>v;
            for(auto i : mp){
                v.push_back({
                    i.second, i.first
                });
            }
            
            sort(v.begin(), v.end(), [&](pair<int,int>&a, pair<int,int>&b){
                if(a.first == b.first)
                    return a.second<b.second;
                    
                return a.first>b.first;
            });
            
            vector<int>a;
            for(auto x : v){
                int f = x.first, el = x.second;
                for(int i=0; i<f; i++)
                    a.push_back(el);
            }
            
            return a;
        }
};