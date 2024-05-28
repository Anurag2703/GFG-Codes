class Solution{
    public:
        int findIndex(string str) {
            return count(str.cbegin(), str.cend(), ')');
        }
};