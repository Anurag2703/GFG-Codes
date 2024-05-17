class Solution{
    public:
        //Function to rotate an array by d elements in counter-clockwise direction. 
        void rotateArr(int arr[], int d, int n){
            int temp[n];
            
            for(int i=0; i<n; i++)
                temp[i] = arr[i];
                
            for(int i=0; i<n; i++)
                arr[i] = temp[(i+d)%n];
        }
};