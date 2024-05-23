int findElement(int arr[], int n) {
    vector<int>g(n, arr[n-1]);
    for(int i=n-2; i>=0; i--)
        g[i] = min(g[i+1], arr[i]);
        
    for(int i=1; i<n-1; i++){
        if(arr[i]>=arr[i-1] && arr[i]<=g[i+1])
            return arr[i];
        
        arr[i] = max(arr[i-1], arr[i]);
    }
    return -1;
}