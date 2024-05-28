class Solution{
    public:
        /* Returns count of pairs with difference k in arr[] of size n. */
        int countPairsWithDiffK(int arr[], int n, int k) {
            int maxi=arr[0];
            for(int i=0; i<n; i++)
                maxi = max(maxi, arr[i]);
                
            vector<int>v(maxi+1, 0);
            for(int i=0; i<n; i++)
                v[arr[i]]++;
                
            int r=0;
            for(int i=0; i<n; i++)
                if((arr[i]+k) <= maxi){
                    if(k == 0)
                        v[arr[i]+k]--;
                    
                    r += v[arr[i] + k];
                }
            
            return r;
        }
};