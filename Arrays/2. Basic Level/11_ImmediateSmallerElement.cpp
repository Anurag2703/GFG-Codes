class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    int i = 0;
	    while(i<n){
	        if(arr[i] > arr[i+1])
                arr[i] = arr[i+1];
            else arr[i] = -1;
            
            i++;
	    }
        arr[n-1] = -1;
	}

};