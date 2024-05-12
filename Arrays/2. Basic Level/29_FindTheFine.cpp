class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long int sum=0;
        int x = (date%2);
        
        for(int i=0; i<n; i++){
            if(car[i]%2 != x)
                sum += fine[i];
        }
        return sum;
    }
};