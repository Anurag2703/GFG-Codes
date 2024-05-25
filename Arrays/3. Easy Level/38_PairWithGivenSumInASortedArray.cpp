class Solution{
    public:
        int Countpair(int arr[], int n, int sum){
            int x=0, count=0;
            for(int i=0; i<n; i++){
                x = sum - arr[i];
                for(int j=i+1; j<n; j++)
                    if(arr[j] == x)
                        count++;
            }
            
            if(count == 0)
                return -1;
            else return count;
        }
};