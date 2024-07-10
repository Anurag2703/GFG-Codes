// Level: MEDIUM

class Solution {
    public:
        int threeSumClosest(vector<int> arr, int target) {
            int n = arr.size();
            sort(arr.begin(), arr.end());
            
            int mini = INT_MAX;
            int r;
            
            for(int i=0; i<n; i++){
                int j = i+1, k = n-1;
                while(j < k){
                    int s = arr[i] + arr[j] + arr[k];
                    
                    if(abs(s - target) < mini){
                        mini = abs(s - target);
                        r = s;
                    }else if(abs(s - target) == mini)
                        r = max(r,s);
                        
                    if(s >target)
                        k--;
                    else j++;
                }
            }
            
            return r;
        }
};