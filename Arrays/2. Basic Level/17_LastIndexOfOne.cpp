class Solution{
    public:
    int lastIndex(string s) 
    {
        int n = s.length(), count=-1;
        
        for(int i=0; i<n; i++)
            if(s[i] == '1'){
                count = i;
                continue;
            }
        
        return count;
    }

};