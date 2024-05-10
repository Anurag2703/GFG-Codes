class Solution{   
public:
    // This is a function reverse
    void rev(int arr[], int start, int end){
        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    // THIS IS THE MAIN FUNCTION
    void leftRotate(int arr[], int n, int d) {
        rev(arr, 0, d-1);
        rev(arr, d, n-1);
        rev(arr, 0, n-1);
    }
};