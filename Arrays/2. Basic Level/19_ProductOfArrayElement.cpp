long long int product(int ar[], int n, long long int mod)
{
    long long prod = 1;
    for(long long i=0; i<n; i++)
        prod = (prod*ar[i])%mod;
    
    return prod;
}