class Solution{
    public:
        void modifyAndRearrangeArr(int arr[], int n) { 
    	    for(int i=1; i<n; i++){
    	        if(arr[i]==arr[i-1] && arr[i]!=0){
    	            arr[i-1] *= 2;
    	            arr[i] = 0;
    	        }
    	    }
    	    
    	    int count=0;
            for(int i=0; i<n; i++)
                if(arr[i] != 0){
                    swap(arr[i], arr[count]);
                    count++;
                }
        }
};