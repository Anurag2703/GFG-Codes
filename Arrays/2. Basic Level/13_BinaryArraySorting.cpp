class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
        int cnt_zero=0, cnt_one=0;
        for(int i=0; i<N; i++)
            if(A[i] == 0)
                cnt_zero++;
        
        int i=0;
        while(i<cnt_zero){
            A[i] = 0;
            i++;
        }
        while(i<N){
            A[i] = 1;
            i++;
        }
    }
};