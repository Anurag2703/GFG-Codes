class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
	    map<int,int>mp;
	    for(int i=0; i<n; i++)
	        if(arr[i]>=A && arr[i]<=B)
	            mp[arr[i]]++;
	            
	    for(int i=A; i<=B; i++)
	        if(mp[i] == 0)
	            return false;
	    
	    return true;
	}
};