class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    int maxRight = arr[n-1];
	    arr[n-1] = -1;
	    
	    for(int i=n-2; i>=0; i--){
	        int temp = arr[i];
	        arr[i] = maxRight;
	        maxRight = max(maxRight, temp);
	    }
	}
};