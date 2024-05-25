class Solution{
    public:
        string roundToNearest(string N) { 
            if(N.back() > '5')
                N.back() = '9';
            else return (N.back()='0', N);
            
            for(auto i{N.rbegin()}; i!=N.rend(); ++i){
                if(*i == '9')
                    *i = '0';
                else{
                    ++*i;
                    break;
                }
            }
            return (N.front()=='0' ? '1'+N : N);    //Tarnery Operator
        }  
};