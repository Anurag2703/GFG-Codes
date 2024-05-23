class Solution{
    public:
        int firstNonRepeating(int arr[], int n){
            unordered_map<int,int>mp;
            
            for(int i=0; i<n; i++)
                mp[arr[i]]++;
            
            unordered_map<int,int>mp1;
            for(auto i : mp)
                if(i.second == 1)
                    mp1[i.first]++;
                    
            for(int i=0; i<n; i++){
                if(mp1.find(arr[i]) != mp1.end())
                return arr[i];
            }
                    
            return 0;
        } 
};