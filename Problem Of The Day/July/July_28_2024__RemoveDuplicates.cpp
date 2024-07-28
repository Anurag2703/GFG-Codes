// Level: EASY

class Solution {
    public:
        string removeDups(string str) {
            unordered_set<char>s;
            string r;
            
            for(char i : str)
                if(s.find(i) == s.end()){
                    s.insert(i);
                    r += i;
                }
                
            return r;
        }
};