// Level: EASY

class Solution {
    public:
        string printString(string s, char ch, int count) {
            int c=0;
            char a;
            
            for(int i=0; i<s.length(); i++){
                if(c == count){
                    string b = s.substr(i, s.length());
                    return b;
                }
                if(s[i] == ch)
                    c++;
            }
            
            return "";
        }
};