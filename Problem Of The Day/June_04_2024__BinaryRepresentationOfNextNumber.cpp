class Solution {
    public:
        string binaryNextNumber(string s) {
            string r='0'+s;
            int i=s.size();
            while(r[i] == '1')
                r[i--] = '0';
                
            r[i] = '1';
            
            reverse(r.begin(), r.end());
            while(r.back() == '0')
                r.pop_back();
            
            reverse(r.begin(), r.end());
            return r;
        }
};