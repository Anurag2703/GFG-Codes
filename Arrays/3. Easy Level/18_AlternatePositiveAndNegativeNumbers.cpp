class Solution{
    public:
        void rearrange(int arr[], int n) {
            vector<int>pos;
            vector<int>neg;
            for(int i=0; i<n; i++){
                if(arr[i] >= 0)
                    pos.push_back(arr[i]);
                else neg.push_back(arr[i]);
            }
            
            int i = 0, j = 0, k = 0;
            bool positiveTurn = true;
            while (i < pos.size() && j < neg.size()) {
                if (positiveTurn)
                    arr[k++] = pos[i++];
                else
                    arr[k++] = neg[j++];
                
                positiveTurn = !positiveTurn;
            }
            
            // Add remaining positive numbers, if any
            while (i < pos.size())
                arr[k++] = pos[i++];
            
            // Add remaining negative numbers, if any
            while (j < neg.size())
                arr[k++] = neg[j++];
        }
};