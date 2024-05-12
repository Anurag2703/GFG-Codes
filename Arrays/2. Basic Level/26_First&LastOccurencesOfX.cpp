class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        int p=-1,q=-1, flag=1;
        // First occurence
        for(int i=0; i<n; i++)
            if(arr[i] == x){
                flag = 1;
                p = i;
                break;
            }
        
        // Last occurence    
        for(int i=n-1; i>=0; i--)
            if(arr[i] == x){
                flag = 1;
                q = i;
                break;
            }
        if(p!=-1 && q!=-1)
            return {p,q};
        else return {-1};
    }
};