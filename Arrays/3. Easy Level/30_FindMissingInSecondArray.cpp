class Solution{
	public:
        vector<int> findMissing(int a[], int b[], int n, int m){
            unordered_set<int>s;
            for(int i=0; i<m; i++)
                s.insert(b[i]);
            
            vector<int>v;
            for(int i=0; i<n; i++)
                if(s.count(a[i]) == 0)
                    v.push_back(a[i]);
                    
            return v;
        } 
};