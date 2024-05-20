class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int c=-1, b=-1, mini = INT_MAX;
        
        for(int i=0; i<n; i++){
            if(a[i] == x)
                c = i;
            if(a[i] == y)
                b = i;
            
            if(c!=-1 && b!=-1){
                mini = min(mini, abs(c-b));
            }
        }
        
        if(mini == INT_MAX)
            return -1;
            
        return mini;
    }
};