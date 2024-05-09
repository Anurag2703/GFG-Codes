class Solution {
  public:
    int search(int n, int k, vector<int> &arr) {
        int i=0;
        while(arr[i]!=k && i!=n-1)
            i++;
        
        if(i==n-1)
            return -1;
        else return (i+1);
    }
};