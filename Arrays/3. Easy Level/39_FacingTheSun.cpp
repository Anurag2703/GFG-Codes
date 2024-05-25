class Solution{
    public:	
        // Returns count buildings that can see sunlight
        int countBuildings(int h[], int n) {
            int maxim = h[0];
            int count=1;
            for(int i=0; i<n; i++)
                if(h[i] > maxim){
                    maxim = h[i];
                    count++;
                }
            return count;
        }
};