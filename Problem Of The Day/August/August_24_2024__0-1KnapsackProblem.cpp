// Level: MEDIUM

class Solution {
    public:
        int solve(int w,vector<int>& wt, vector<int>& val,int n){
            if(n==0||w==0)
                return 0;
            
            int nottake = solve(w,wt,val,n-1);
            int take = 0;
            
            if(wt[n-1]<=w)
                take = val[n-1] +solve(w-wt[n-1],wt,val,n-1);
            
            return max(take,nottake);
        }
    
        // Function to return max value that can be put in knapsack of capacity W.
        int knapSack(int W, vector<int>& wt, vector<int>& val) {
            // Your code here
            int n = wt.size();
            return solve(W,wt,val,n);
        }
};