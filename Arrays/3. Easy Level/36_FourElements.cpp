bool find4Numbers(int A[], int n, int X)  {
    sort(A,A+n);
    for(int k=0; k<n; k++){
        for(int i=k+1; i<n; i++){
            int sum = X - A[i] - A[k];
            int left=i+1, right=n-1;
            
            while(left<right){
                if(A[left]+A[right] == sum)
                    return 1;
                else if(A[left]+A[right] > sum)
                    right--;
                else left++;
            }
        }
    }
    
    return 0;
}