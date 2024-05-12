class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        int flag=0;
        for(int i=0; i<n; i++){
            if(a[i] == 1)
                flag = 1;
        }
        int x;
        if(flag == 1)
            for(int i=0; i<n; i++)
                if(a[i] == 1){
                    x = i;
                    break;
                }
                
        if(flag != 1)
            return -1;
        else return x;
    }
};