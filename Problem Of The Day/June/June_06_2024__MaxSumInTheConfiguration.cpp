class Solution {
    public:
        long long max_sum(int a[], int n) {
            long long arraySum=0, s=0;
            for(long long int i=0; i<n; i++){
                arraySum += a[i];
                s += i*a[i];
            }
            long long sum=s;
            for(long long int i=1; i<n; i++){
                s = s + arraySum - n * (long long)a[n-i];
                sum = max(sum, s);
            }
            
            return sum;
        }
};