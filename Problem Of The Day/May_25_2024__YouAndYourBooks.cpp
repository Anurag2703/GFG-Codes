// Level: EASY

class Solution {
    public:
        /*You are requried to complete this method */
        long long max_Books(int arr[], int n, int k) {
            long long result=0, sum=0;
            for(int i=0; i<n; i++){
                if(arr[i] <= k)
                    sum += arr[i];
                else{
                    result = max(result, sum);
                    sum = 0;
                }
            }
            result = max(result, sum);
            return result;
        }
};