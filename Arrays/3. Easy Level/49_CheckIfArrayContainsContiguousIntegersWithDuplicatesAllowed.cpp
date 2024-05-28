class Solution{
    public:
        // Function to check whether the array contains
        // a set of contiguous integers
        bool areElementsContiguous(int arr[], int n){
    	    const unordered_set<int>s(arr,arr+n);
    	    const auto p{minmax_element(s.cbegin(), s.cend())};
    	    
    	    return (*p.second - *p.first == s.size()-1);
        }
};