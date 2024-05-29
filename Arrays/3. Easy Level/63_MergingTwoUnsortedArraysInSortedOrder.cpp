class Solution{
	public:
    	void sortedMerge(int a[], int b[], int res[],int n, int m){
            int x=n+m, k=0;
            for(int i=0; i<n; i++){
                res[k] = a[i];
                k++;
            }
            for(int i=0; i<m; i++){
                res[k] = b[i];
                k++;
            }
            sort(res,res+x);
    	}
};