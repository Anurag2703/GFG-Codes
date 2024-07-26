// Level: EASY

class Solution {
    public:
        bool kPangram(string str, int k) {
            set<char>st;
            int count = 0;
            for(int i=0;i<str.length();i++){
                if(str[i]!=' ' and str[i]!=',' and str[i]!='.'){
                    count++;
                    st.insert(str[i]);
                }
            }
            if(count < 26 ) 
                return false;
            
            if(st.size()==26)
                return true;
            
            if(26 - st.size() <= k) 
                return true;
            
            return false;
        }
};