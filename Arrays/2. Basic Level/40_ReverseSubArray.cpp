class Solution{
public:	
	void reverseSubArray(int *arr, int n, int l, int r) {
	    l--;
	    r--;
	    while(l<r){
	        swap(arr[l], arr[r]);
	        l++;
	        r--;
	    }
	}

};