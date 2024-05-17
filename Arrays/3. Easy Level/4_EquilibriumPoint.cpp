class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        long long int s=0;
        for(int i=0; i<n; i++)
            s += a[i];
        
        long long int left=0, right=s;
        for(int i=0; i<n; i++){
            right -= a[i];
            if(right == left)
                return (i+1);
                
            left += a[i];
        }
        return -1;
    }
};