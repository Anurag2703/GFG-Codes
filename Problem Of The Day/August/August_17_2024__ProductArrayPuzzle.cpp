// Level: EASY

class Solution {
    public:
        // nums: given vector
        // return the Product vector P that hold product except self at each index
        vector<long long int> productExceptSelf(vector<long long int>& nums) {
            // code here
            vector<long long>ans(nums.size(), 1);
            
            for(int i = 0; i < nums.size(); i++){
                for(int j = 0; j < nums.size(); j++){
                    if(j != i){
                        ans[i] *= nums[j];
                    }
                }
            }
            
            return ans;
        }
};