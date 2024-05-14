class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
        vector<int>neg;
        for(int i=0; i<n; i++)
            if(a[i]<0)
                neg.push_back(a[i]);
        vector<int>pos;
        for(int i=0; i<n; i++)
            if(a[i]>0)
                pos.push_back(a[i]);
        vector<int>r;
        for(int i=0; i<n; i++){
            r.push_back(pos[i]);
            r.push_back(neg[i]);
        }
        return r;
    }
};