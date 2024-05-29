class Solution{   
    public:
        int findMaxAverage(int arr[], int n, int k) {
            int start=0, maxi=0;
            for(int i=0; i<n; i++)
                maxi += arr[i];
                
            int s=0, net=maxi;
            for(int i=k; i<n; i++){
                int z = arr[i];
                start = i-k+1;
                
                int pro_starting = arr[i-k];
                int maxi2 = net - pro_starting + z;
                net = maxi2;
                
                if(maxi2 > maxi){
                    maxi = maxi2;
                    s = start;
                }
            }
            return s;
        }
};