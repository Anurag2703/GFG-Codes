// Structure of the element of the array is as
struct Height {
    int feet;
    int inches;
};

// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n) {
    int h[n];
    for(int i=0; i<n; i++)
        h[i] = ((arr[i].feet*12)+(arr[i].inches));
    
    sort(h, h+n);
    return h[n-1];
}