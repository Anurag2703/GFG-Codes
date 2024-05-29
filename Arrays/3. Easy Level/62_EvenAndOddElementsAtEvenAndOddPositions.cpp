class Solution{
	public:
    	vector<int> arrangeOddAndEven(int a[], int n) {
            vector<int>odd,even,v;
            int k=0,j=0;
            for(int i=0; i<n; i++){
                if(a[i]%2 == 0)
                    even.push_back(a[i]);
                else odd.push_back(a[i]);
            }
            
            while(j<n && k<n){
                if(j<even.size())
                    v.push_back(even[j]);
                if(k<odd.size())
                    v.push_back(odd[j]);
                    
                j++;
                k++;
            }
            return v;
    	}
};