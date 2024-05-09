int PalinArray(int a[], int n)
    {
    	for(int i=0; i<n; i++){
    	    int rem=0, rev=0, temp = a[i];
    	    while(a[i]>0){
    	        rem = a[i]%10;
    	        rev = (rev*10)+rem;
    	        a[i] /= 10;
    	    }
    	    if(rev != temp)
    	        return 0;
    	}
    	
        return 1;
}