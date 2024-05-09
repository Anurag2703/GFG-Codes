class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        sort(a, a+n);
        vector<int>arr;
        for(int i=0; i<n-2; i++)
            arr.push_back(a[i]);
        
        return (arr);
    }
};