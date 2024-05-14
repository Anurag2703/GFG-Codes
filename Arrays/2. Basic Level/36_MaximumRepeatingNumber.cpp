class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    int a[k] = {0};
	    for(int i=0; i<n; i++)
	        a[arr[i]]++;
	        
	    int *index = max_element(a,a+k);
	    return (index-a);
	}

};