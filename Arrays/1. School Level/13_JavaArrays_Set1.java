class Compute
{
    String average(int A[], int N)
    {
        int sum=0;
        float avg=0;
        for(int i=0; i<N; i++)
            sum += A[i];
            
        avg = (float)sum/N;
        String  roundedDecimal = String.format("%.2f", avg);
        
        return roundedDecimal;
    }
}