// Level: EASY

class Solution{
    public:
        int missingNumber(int n, vector<int>& array) {
            sort(array.begin(), array.end());
            int count=0;
            for(long long int i=1; i<=n; i++){
                if(array[i-1] != i)
                    return i;
            }
        }
};