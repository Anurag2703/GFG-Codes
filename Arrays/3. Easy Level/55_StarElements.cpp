vector<int> getStarAndSuperStar(int arr[], int n) {
    int greatest=arr[n-1], gindex=n-1;
    vector<int>v;
    v.push_back(arr[n-1]);
    
    // Star Element
    for(int i=n-2; i>=0; i--)
        if(arr[i] > greatest){
            greatest = arr[i];
            gindex = i;
            v.push_back(arr[i]);
        }
        
    // SuperStar Element
    if(gindex == 0)
        v.push_back(greatest);
    else{
        bool flag=false;
        for(int i=gindex-1; i>=0; i--)
            if(arr[i] == greatest){
                v.push_back(-1);
                flag = -1;
                break;
            }
            
        if(!flag)
            v.push_back(greatest);
    }
    reverse(v.begin(), v.end());
    return v;
}