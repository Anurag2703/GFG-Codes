class Solution{
  public:
    int minDiff(int arr[], int N, int K)
    {
        sort(arr,arr+N);
        vector<int>r;
        int p=0;
        while(K<=N){
            r.push_back(arr[K-1]-arr[p]);
            K++;
            p++;
        }
        sort(r.begin(), r.end());
        return r[0];
    }
};