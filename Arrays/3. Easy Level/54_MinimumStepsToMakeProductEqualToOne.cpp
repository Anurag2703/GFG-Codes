class Solution {
    public:
        int makeProductOne(int arr[], int N) {
            int neg=0, zero=0, ans=0;
            for(int i=0; i<N; i++){
                if(arr[i] > 0)
                    ans += arr[i]-1;
                else if(arr[i] == 0){
                    ans++;
                    zero++;
                }
                else if(arr[i] < 0){
                    ans += abs(arr[i])-1;
                    neg++;
                }
            }
            
            if((neg+zero)%2 == 0)
                return ans;
            else if(neg%2 && zero==0)
                return (ans+2);
            
            return ans;
        }
};