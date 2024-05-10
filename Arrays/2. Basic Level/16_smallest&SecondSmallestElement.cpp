vector<int> minAnd2ndMin(int a[], int n) {
    sort(a, a+n);
    if(a[0]==a[n-1])
        return {-1};
    
    int min1 = INT_MAX;
    for(int i=0; i<n; i++)
        if(a[i] < min1)
            min1 = a[i];
    
    int min2 = INT_MAX;
    for(int i=0; i<n; i++)
        if(a[i]<min2 && a[i]>min1)
            min2 = a[i];
            
    if(min1 == min2)
        return {-1};
    else return {min1, min2};
}