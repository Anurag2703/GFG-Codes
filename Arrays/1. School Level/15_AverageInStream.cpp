class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	   float sum=0;
	   vector<float>ans;
	   for(int i=1; i<=n; i++){
	       sum += (arr[i-1]*1.0);
	       ans.push_back(sum/i);
	   }
	   return ans;
	}
};