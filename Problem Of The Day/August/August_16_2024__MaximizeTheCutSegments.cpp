// Level: MEDIUM

class Solution{
    public:
        int solve(int n, int min, int num, int maxnum) {
            // cout<<n<<endl;
            if(n==0) 
                return 0; 
            else if(n>=min && n%min==0) 
                return n/min;
            else if(n<min) 
                return INT_MIN;
            else return max(1+solve(n-num,min,num,maxnum),1+solve(n-maxnum,min,num,maxnum));
        }
        
        //Function to find the maximum number of cuts.
        int maximizeTheCuts(int n, int x, int y, int z){
            //Your code here
            int minnum = min({x,y,z});
            int maxnum = max({x,y,z});
            
            int c = (x+y+z)-(minnum+maxnum);
            int cuts = solve(n,minnum,c,maxnum);
            
            if(cuts<0) 
                return 0;
            else return cuts;
        }
};