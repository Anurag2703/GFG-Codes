// You are given an array of size N having no duplicate elements. The array can be categorized into the following:
// 1.  Ascending
// 2.  Descending
// 3.  Descending Rotated
// 4.  Ascending Rotated
// Your task is to return which type of array it is and the maximum element of that array.
class Solution{
    public:
        pair<long long, int> maxNtype(long long arr[], long long n){
            long long mine=arr[0];
            long long mini=0;
            long long maxe=arr[0];
            long long maxi=0;
            for(long long i=1;i<n;i++){
                if(maxe<arr[i]){
                    maxe=arr[i];
                    maxi=i;
                }
                if(mine>arr[i]){
                    mine=arr[i];
                    mini=i;
                }
            }
            int choice=0;
            if(mini==0 && maxi==n-1)
                choice=1;
            else if(mini==n-1 && maxi==0)
                choice=2;        
            else if(mini>maxi)
                choice=4;
            else
                choice=3;
            
            pair<long long,int> p;
            p={maxe,choice};
            return(p);
        }
};