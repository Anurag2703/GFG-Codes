// Level: MEDIUM

/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string str) {
            int d=0; //dot count
            vector<long long>nums(5,0);
            for(auto i:str){
                if(i>='0' && i<='9')
                    nums[d]=nums[d]*10+(i-'0');
                else if(i=='.'){
                    d++;
                    continue;
                }else return 0;
                
                if(d>=4 || nums[d] > 255)
                    return 0; 
            }
            return 1;
        }
};