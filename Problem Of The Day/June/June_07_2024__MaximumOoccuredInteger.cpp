class Solution {
    public:
        // l and r are input array
        // maxx : maximum in r[]
        // n: size of array
        // arr[] : declared globally with size equal to maximum in l[] and r[]
        // Function to find the maximum occurred integer in all ranges.
        int maxOccured(int n, int l[], int r[], int maxx) {
            vector<int>mp(maxx+1, 0);
            for(int i=0; i<n; i++){
                mp[l[i]]++;
                if(r[i]+1 <= maxx)
                    mp[r[i] + 1]--;
            }
            
            int c=0, maxi=0, res=0;
            for(int i=0; i<mp.size(); i++){
                mp[i] += c;
                c = mp[i];
                if(c>maxi){
                    maxi = c;
                    res = i;
                }
            }
            return res;
        }
};