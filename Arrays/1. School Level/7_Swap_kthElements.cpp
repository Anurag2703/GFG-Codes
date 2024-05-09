void swapKth(int n, int k, vector<int> &arr) {
    int first = k-1;
    int last = n-k;
    swap(arr[first], arr[last]);
}