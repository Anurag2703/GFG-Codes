/* You are required to complete this method*/
int findEquilibrium(int A[], int n){
    int i=0, j=n-1, s1=0, s2=0;
    
    while(i<j){
        if(s1==s2 && i==j)
            return i;
        if(s1 <= s2){
            s1 += A[i];
            i++;
        }
        if(s1==s2 && i==j)
            return i;
        if(s2 <= s1){
            s2 += A[j];
            j--;
        }
        if(s1==s2 && i==j)
            return i;
    }
    return -1;
}