// We keep 2 variables, one for having the current length(currLen) and one for storing the maximum length(maxLen), we will initialize both the variables to 1 and will start the traversal of the array from 1th index
// We will start the array traversal from 1th index and will  check the contiguous increment, if there is an increment then will update the the currLen.
// When the increment breaks(i.e. when there is a decrement in the array) then will update the maxLen.
// We also have to update the maxLen after the traversal since the longest increasing subarray could be till the last index of the array.

class Solution{
  public:
    long int lenOfLongIncSubArr(long int arr[], long int n) {
        long int maxLen=1, currLen=1;
        for(long int i=1; i<n; i++){
            if(arr[i-1]<arr[i])
                currLen++;
            else{
                maxLen = max(maxLen, currLen);
                currLen = 1;
            }
        }
        maxLen = max(maxLen, currLen);
        return maxLen;
    }
};