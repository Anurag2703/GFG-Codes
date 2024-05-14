class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    vector<int> a;
	    vector<int> b;
	    for(int i=0; i<n; i++){
	        if(arr[i]%2 == 0)
	            a.push_back(arr[i]);
            else b.push_back(arr[i]);
	    }
	    
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end());
	    int k=0;
	    for(int i=0; i<a.size(); i++)
	        arr[k++] = a[i];
	    for(int i=0; i<b.size(); i++)
	        arr[k++] = b[i];
	}
};