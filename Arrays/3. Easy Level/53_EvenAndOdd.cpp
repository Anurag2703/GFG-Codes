class Solution {
    public:
        void reArrange(int arr[], int N) {
            vector<int>odd,even;
            int k=0;
            for(int i=0; i<N; i++){
                if(arr[i]%2 == 0)
                    even.push_back(arr[i]);
                else odd.push_back(arr[i]);
            }
            
            for(int i=0, j=0; i<N, j<even.size(); i+=2, j++)
                arr[i] = even[j];
            for(int i=1, j=0; i<N, j<odd.size(); i+=2, j++)
                arr[i] = odd[j];
        }
};