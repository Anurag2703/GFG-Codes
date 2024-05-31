class Solution{
    public:
        int minEnergy(int a[], int n){
            if(n==1 && a[0]>0)
                return 1;
                
            int x=0, count=0;
            for(int i=0; i<n; i++){
                x += a[i];
                if(x <= 0){
                    count = count + 0 - x + 1;
                    x = 1;
                }
            }
            return count;
        }
};