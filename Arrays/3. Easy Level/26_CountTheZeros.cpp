class Solution{   
    public:
        int countZeroes(int arr[], int n) {
            int count=0;
            for(int i=0; i<n; i++)
                if(arr[i] != 1)
                    count++;
                    
            return count;
        }
};