int minMoves(int a[], int n){
    int maxZero=-1, sum=0, start=-1;
    bool allZero=true;
    for(int i=0; i<n; i++){
        if(a[i] == 0){
            if(start == -1)
                start = i;
            sum++;
        }else{
            allZero = false;
            if(start == 0)
                maxZero = max(sum, maxZero);
            else{
                sum = (sum/2) + (sum%2);
                maxZero = max(sum, maxZero);
            }
            start = -1;
            sum = 0;
        }
    }
    if(allZero)
        return -1;
    if(a[n-1] == 0)
        maxZero = max(sum, maxZero);
        
    return maxZero;
}