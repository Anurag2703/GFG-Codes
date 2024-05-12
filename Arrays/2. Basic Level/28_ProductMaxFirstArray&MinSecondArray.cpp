class Solution{
    public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        long long int p=1;
        int &max = *max_element(a, a+n);
        int &min = *min_element(b, b+m);
        
        p = max*min;
        return p;
    }
};