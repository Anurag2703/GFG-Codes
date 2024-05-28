class Solution{
    public:	
        vector<int> findSum(vector<int> &a, vector<int> &b) {
            vector<int>r;
            int m = a.size(), n = b.size();
            int carry=0;
            
            while(m>0 || n>0 || carry>0){
                int x=0, y=0;
                if(m>0)
                    x = a[--m];
                
                if(n>0)
                    y = b[--n];
                    
                int sum = x + y + carry;
                r.push_back(sum%10);
                carry = sum/10;
            }
            
            reverse(r.begin(), r.end());
            return r;
        }
};