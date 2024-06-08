// Level: EASY

class Solution {
    public:
        string oddEven(string s) {
            unordered_map<char,int>mp;
            vector<int>v(26,0);
            
            for(char x : s)
                mp[x]++;
                
            int count=0;
            for(int i=0; i<s.size(); i++)
                if(((s[i]-'a'+1)%2==1 && mp[s[i]]%2==1) || ((s[i]-'a'+1)%2==0 && mp[s[i]]%2==0))
                    if(!v[s[i]-'a']){
                        v[s[i]-'a'] = 1;
                        count++;
                    }
                    
            return (count%2==0)?"EVEN":"ODD";
        }
};