class Solution{
    public:  
        int smallestSubWithSum(int arr[], int n, int x)
        {
            int i=0, j=0, sum=0, mini=INT_MAX;
            while(i<n){
                sum += arr[i];
                if(sum>x)
                    while(sum>x && i>=j){
                        mini = min(mini, i-j+1);
                        sum -= arr[j];
                        j++;
                    }
                i++;
            }
            
            if(mini == INT_MAX)
                mini = 0;
            
            return mini;
        }
};