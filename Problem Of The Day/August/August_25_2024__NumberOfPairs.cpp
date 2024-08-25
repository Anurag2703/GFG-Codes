// Level: MEDIUM

class Solution {
    private:
        int binarySearch(int key, vector<int>&brr){
            int low=0;
            int high=brr.size()-1;
            int idx=-1;
            
            while(low<=high){
                int mid = (low+high)/2;
                
                if(brr[mid]<=key){
                    idx = mid;
                    low = mid+1;
                }else (high = mid-1);
            }
            
            return idx;
        }
    
    public:
        long long countPairs(vector<int> &arr, vector<int> &brr) {
            // Your Code goes here.
            long long ans=0;
            long long one=0;
            long long two=0;
            long long threefour=0;
            sort(brr.begin(),brr.end());
            
            for(auto x:brr){
                if(x==1) 
                    one++;
                else if(x==2) 
                    two++;
                else if(x==3 || x==4) 
                    threefour++;
            }
            
            for(auto x:arr){
                if(x!=1) {
                    ans=ans+one;
                    
                    if(x==2)
                        ans=ans-threefour;
                    if(x==3)
                        ans=ans+two;
                        
                    int index=binarySearch(x,brr);
                    ans=ans+(brr.size()-index-1);
                }
            
            }
            
            return ans;
        }
};