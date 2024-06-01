class Solution{
    //Function to find the leaders in the array.
    public:
        vector<int> leaders(int a[], int n){
            vector<int>v;
            int x{};
            while(n--)
                if(a[n] >= x){
                    x = a[n];
                    v.push_back(x);
                }
                
            return {v.crbegin(), v.crend()};
        }
};