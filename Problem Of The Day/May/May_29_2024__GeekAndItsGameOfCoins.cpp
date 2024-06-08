// Level: MEDIUM

class Solution {
    public:
        int wins(int n, int &x, int &y, vector<int>&v){
            if(n == 0)
                return 0;
            else if(v[n] != -1)
                return v[n];
                
            int r=0;
            r |= (!wins(n-1, x, y, v));
            if(n-x >= 0)
                r |= (!wins(n-x, x, y, v));
            
            if(n-y >= 0)
                r |= (!wins(n-y, x, y, v));
                
            return (v[n] = r);
        }
        
        // Question Function
        int findWinner(int n, int x, int y) {
            vector<int>v(n+1, -1);
            return wins(n, x, y, v);
        }
};