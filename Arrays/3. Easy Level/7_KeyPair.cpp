class Solution{
    public:	
        // Function to check if array has 2 elements
        // whose sum is equal to the given value
        bool hasArrayTwoCandidates(int arr[], int n, int x) {
            unordered_map<int,int>m;
            
            for(int i=0; i<n; i++){
                int b = x-arr[i];
                if(m[b])
                    return true;
                
                m[arr[i]]++;
            }
            return false;
        }
};