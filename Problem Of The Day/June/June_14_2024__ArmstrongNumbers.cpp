// Level: EASY

class Solution {
    public:
        int order(int x){
            int y=0;
            while(x){
                y++;
                x /= 10;
            }
            return y;
        }
    
        string armstrongNumber(int n) {
            int x = order(n);
            int temp=n, sum=0;
            
            while(temp){
                int r = temp%10;
                sum += pow(r, x);
                temp /= 10;
            }
            
            if(sum == n)
                return "true";
            else return "false";
        }
};