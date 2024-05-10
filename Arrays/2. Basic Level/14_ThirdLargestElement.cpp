class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        sort(a, a+n);
        if(n>2)
            return a[n-3];
        else return -1;
    }

};