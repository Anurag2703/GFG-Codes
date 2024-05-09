string isSubset(int a1[], int a2[], int n, int m) {
    map<int, int>mp;
    string r;
    
    if(m>n)
        return "No";
        
    for(int i=0; i<n; i++)
        mp[a1[i]]++;
    
    for(int i=0; i<m; i++){
        if(mp.find(a2[i])->second == 0){
            r = "No";
            break;
        }else{
            r = "Yes";
            mp[a2[i]]--;
        }
    }
    return r;
}