class Solution{
	public:
    	int calculateMaxSumLength(int arr[], int n, int k){
            int sum=0, i=0, j=0;
            bool flag=false;
            while(j<n){
                if(arr[j] <= k){
                    if(arr[j] == k)
                        flag = true;
                    j++;
                }else if(arr[j] > k){
                    if(flag == true){
                        sum += j-i;
                        flag = false;
                    }
                    i = ++j;
                }
            }
            if(flag == true)
                sum += j-i;
            
            return sum;
    	}
};