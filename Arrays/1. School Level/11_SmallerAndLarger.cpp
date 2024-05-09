class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    int c1=0, c2=0;
	    for(int i=0; i<n; i++){
	        if(arr[i] <= x)
	            c1++;
	        if(arr[i] >= x)
	            c2++;
	    }
	    
	    return {c1,c2};
	}
};