string maximumFrequency(string s){
    unordered_map<string,int>m;
    string str="";
    vector<string>v;
    unordered_set<string>st;
    int maxi=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' ')
            while(s[i]!=' '&&i<s.size()){
                str+=s[i];
                i++;
            }
            
        m[str]++;
        maxi=max(maxi,m[str]);
        if(st.find(str)==st.end()){
            st.insert(str);
            v.push_back(str);
        }
        str="";
    }
    
    for(int i=0;i<v.size();i++)
        if(m[v[i]]==maxi){
            string ans=v[i]+" "+to_string(maxi);
            return ans;
        }
}