class Solution{
    public:
        string PartyType(long long int a[], int n)
        {
            unordered_set<int>s;
            for(int i=0; i<n; i++){
                if(s.find(a[i]) != s.end())
                    return "BOYS";
                else s.insert(a[i]);
            }
            return "GIRLS";
        }
};