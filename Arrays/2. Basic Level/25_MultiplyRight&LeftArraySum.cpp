int multiply(int arr[], int n)
{
    int a = n/2;
    int leftsum=0, rightsum=0;
    for(int i=0,j=a; i<a; i++,j++){
        leftsum += arr[i];
        rightsum += arr[j];
    }
    if(n%2 != 0)
        rightsum += arr[n-1];
    return (leftsum*rightsum);
}