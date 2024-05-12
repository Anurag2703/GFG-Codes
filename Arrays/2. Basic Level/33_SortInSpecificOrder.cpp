class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        sort(arr, arr+n, greater<int>());
        long long a[n-1];
        int k=0;
        for(int i=0; i<n; i++)
            if(arr[i]%2 != 0)
                a[k++] = arr[i];
        
        sort(arr, arr+n);
        for(int i=0; i<n; i++)
            if(arr[i]%2 == 0)
                a[k++] = arr[i];
                
        for(int i=0; i<n; i++)
            arr[i] = a[i];
    }
};