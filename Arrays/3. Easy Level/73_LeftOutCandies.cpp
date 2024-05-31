long long leftCandies(long long n, long long m) {
    long long val=n*(n+1)/2;
    m %= val;
    long long start=0, end=n, result;
    
    while(start <= end){
        long long mid = (start + end)/2;
        long long candies = mid * (mid+1)/2;
        
        if(m >= candies){
            result = mid;
            start = mid+1;
        }else end = mid-1;
    }
    
    return (m - (result * (result+1)/2));
}