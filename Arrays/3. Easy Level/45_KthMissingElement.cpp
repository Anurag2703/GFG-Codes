int KthMissingElement(int a[], int n, int k){
    vector<int>b,v;
    for(int i=a[0]; i<=a[n-1]; i++)
        b.push_back(i);
        
    unordered_set<int>s;
    for(int i=0; i<n; i++)
        s.insert(a[i]);
        
    for(int i=0; i<b.size(); i++)
        if(s.find(b[i]) == s.end())
            v.push_back(b[i]);
    
    if(v.size() < k)
        return -1;
    else{
        int result = v[k-1];
        return result;
    }
}