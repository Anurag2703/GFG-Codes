class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        int max = INT_MIN;
        for(int i=0; i<n; i++)
            if(a[i] > max)
                max = a[i];
                
        int min = INT_MAX;
        for(int i=0; i<n; i++)
            if(a[i] < min)
                min = a[i];
                
        return {min, max};
    }
};