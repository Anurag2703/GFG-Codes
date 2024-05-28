class Solution{
    public:
        int findPairs(long long a[], long long n){
            unordered_set<int>s;
            for(int i=0; i<n; i++){
                int key1=a[i];
                for(int j=i+1; j<n; j++){
                    int key2=a[j];
                    if(s.find(key1+key2) == s.end())
                        s.insert(key1 + key2);
                    else return 1;
                }
            }
            return 0;
        }
};