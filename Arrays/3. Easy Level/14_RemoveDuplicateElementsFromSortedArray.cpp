class Solution{
    public:
        int remove_duplicate(int a[],int n){
            int i=0;
            for(int j=1; j<n; j++)
                if(a[i] != a[j]){
                    i++;
                    swap(a[i], a[j]);
                }
            return i+1;
        }
};