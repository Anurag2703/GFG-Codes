// Level: BASIC

class Solution {
    public:
        int swapNibbles(int n) {
            return ((n&15)<<4 | (n&240)>>4);
        }
};