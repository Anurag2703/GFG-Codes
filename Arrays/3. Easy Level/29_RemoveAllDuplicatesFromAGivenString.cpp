class Solution{
    public:
        string removeDuplicates(string str) {
            unordered_set<char>s;
            string a = "";
            for(char x : str)
                s.insert(x);
            
            for(char x : str)
                if(s.find(x) != s.end()){
                    a = a+x;
                    s.erase(x);
                }
                
            return a;
        }
};