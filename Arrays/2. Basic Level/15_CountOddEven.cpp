class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    vector<int> countOddEven(int arr[], int sizeof_array)
    {
        sort(arr, arr+sizeof_array);
        int odd=0, even=0;
        for(int i=0; i<sizeof_array; i++){
            if(arr[i]%2 != 0)
                odd++;
            if(arr[i]%2 == 0)
                even++;
        }
        return {odd, even};
    }
};