// level: Medium

class Solution {
    public:
        int findSwapValues(int a[], int n, int b[], int m) {
            set<int> s;
            int sum = 0;
            for(int i=0;i<n;i++){
                sum += a[i];
                s.insert(a[i]);
            }
            for(int i=0; i<m; i++)
                sum -= b[i];
                
            if(sum%2 != 0)
                return -1;
                
            for(int i=0; i<m; i++)
                if(s.find((sum + 2*b[i])/2) != s.end())
                    return 1;
            
            return -1;
        }
};