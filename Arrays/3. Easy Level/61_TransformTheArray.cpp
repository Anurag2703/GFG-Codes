class Solution{
	public:
    	vector<int> valid(int arr[],int n){
            int first=0;
            vector<int>v(n,0);
            for(int i=0; i<n; i++){
                if(arr[i] == 0)
                    continue;
                
                if(arr[first]==arr[i] && i!=0){
                    arr[first] = 2 * arr[first];
                    arr[i] = 0;
                }else first = i;
            }
            int k=0;
            for(int i=0; i<n; i++)
                if(arr[i] != 0)
                    v[k++] = arr[i];
                    
            return v;
    	}
};