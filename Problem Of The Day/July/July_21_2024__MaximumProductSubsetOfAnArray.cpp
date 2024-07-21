// Level: MEDIUM

class Solution {
    public:
        long long int findMaxProduct(vector<int>& arr) {
            long r=1;
            int maxim = INT_MIN;
            for(int i=0; i<arr.size(); i++){
                if(arr[i] != 0)
                    r = (r * arr[i]%1000000007);
                    
                if(arr[i]<0 && maxim<arr[i])
                    maxim = arr[i];
            }
            
            if(r<0)
                return r/maxim;
                
            return r;
        }
};