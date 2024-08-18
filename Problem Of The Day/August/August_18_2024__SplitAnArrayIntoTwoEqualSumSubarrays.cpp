// Level: EASY

class Solution {
    public:
        bool canSplit(vector<int>& arr) {
            // code here
            int tsum = 0;
            int n = arr.size();
            for(int i=0;i<n;i++){
                tsum+=arr[i];
            }
            if(tsum %2!=0) return 0;
            
            int sum = tsum/2;
            int currSum=0;
            for(int i=0;i<n;i++){
                currSum+=arr[i];
                if(currSum==sum){
                    return 1;
                }else if(currSum>sum){
                    return 0;
                }
            }
        }
};