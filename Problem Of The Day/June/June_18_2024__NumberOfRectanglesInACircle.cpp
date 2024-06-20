// Level: MEDIUM

class Solution {
    public:
        int rectanglesInCircle(int r) {
            int count=0, start=1, t=1, end=2*r;
            
            while(start <= end){
                if(start*start + t*t <= 4*r*r){
                    count++;
                    t++;
                }else{
                    start++;
                    t=1;
                }
            }
            return count;
        }
};