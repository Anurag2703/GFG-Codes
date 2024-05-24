class Solution {
    public:
        vector<int> increment(vector<int> arr ,int N) {
            while(N--){
                if(arr[N] == 9)
                    arr[N] = 0;
                else return (++arr[N], arr);
            }
            return (arr.front()=1, arr.push_back(0), arr);
        }
};