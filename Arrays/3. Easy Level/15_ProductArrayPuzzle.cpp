class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long>v1(n,1);
        vector<long long>v2(n,1);
        vector<long long>result;
        for(int i=1; i<n; i++)
            v1[i] = v1[i-1]*nums[i-1];
        for(int i=n-2; i>=0; i--)
            v2[i] = v2[i+1]*nums[i+1];
            
        for(int i=0; i<n; i++)
            result.push_back(v1[i] * v2[i]);
            
        return result;
    }
};