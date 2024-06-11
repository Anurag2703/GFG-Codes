// Level: MEDIUM

class Solution{
    public:
        long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
            long long s=0;
            for(int i=0; i<n; i++){
                brr[i] -= arr[i];
                s += arr[i];
            }
            
            int c=0,i=0;
            sort(brr.begin(),brr.end());
            
            while(brr[i]<=0 && i<x){
                c++;
                i++;
            }
            
            i=0;
            while(i<y && c<n){
                s += brr[n-i-1];
                i++;
                c++;
            }
            
            return s;
        }
};