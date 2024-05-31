int minSwaps(int arr[], int n) {
    int k=0;
    for(int i=0; i<n; i++)
        if(arr[i])
            k++;
            
    if(k == 0)
        return -1;
    
    int maxi=INT_MIN;
    int curr=0;
    
    for(int i=0; i<n; i++){
        if(i < k){
            if(arr[i])
                curr++;
        }else{
            maxi = max(maxi, curr);
            if(arr[i])
                curr++;
            
            if(arr[i-k])
                curr--;
        }
    }
    
    maxi = max(maxi, curr);
    return (k-maxi);
}