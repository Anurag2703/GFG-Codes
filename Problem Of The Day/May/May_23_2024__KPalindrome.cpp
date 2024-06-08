// Level: EASY

class Solution{
    public:
        int kPalindrome(string str, int n, int k){
            vector<int>current(n+1, 0), ahead(n+1, 0);
            
            for(int i=n-1; i>=0; i--){
                for(int j=n-1; j>=0; j--)
                    current[j] = max({ahead[j], current[j+1], (str[i] == str[n-j-1])?1+ahead[j+1]:0});
                    
                ahead = current;
            }
            return (n-current[0] <= k);
        }
};