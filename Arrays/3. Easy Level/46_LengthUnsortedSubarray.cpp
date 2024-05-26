class Solution{
    public:	
        vector<int> printUnsorted(int arr[], int n) {
            int b[n];
            for(int i=0; i<n; i++)
                b[i] = arr[i];
                
            sort(arr,arr+n);
            vector<int>v;
            for(int i=0; i<n; i++)
                if(arr[i] != b[i])
                    v.push_back(i);
                    
            if(v.size() == 0){
                v.push_back(0);
                v.push_back(0);
                return v;
            }else{
                int mini = *min_element(v.begin(), v.end());
                int maxi = *max_element(v.begin(), v.end());
                
                vector<int>result;
                result.push_back(mini);
                result.push_back(maxi);
                return result;
            }
        }
};