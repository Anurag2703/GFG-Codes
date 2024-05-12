class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
        int b=n/2, l=0, r=0;
        for(int i=0,j=b; i<b; i++,j++){
            l += a[i];
            r += a[j];
        }
        
        if(l>r)
            return (l-r);
        else return (r-l);
    }
};