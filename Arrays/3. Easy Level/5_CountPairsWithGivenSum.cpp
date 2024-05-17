class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int sum=0;
        unordered_map<int,int>o;
        
        for(int i=0; i<n; i++){
            if(o.find(k-arr[i]) != o.end())
                sum += o[k-arr[i]];
            
            o[arr[i]]++;
        }
        return sum;
    }
};