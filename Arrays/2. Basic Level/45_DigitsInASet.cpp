class Solution{   
public:
    int check(int a){
        if(a==0)
            return 0;
        
        while(a>0){
            int num = a%10;
            if(!(num>0 && num<6))
                return 0;
            
            a /= 10;
        }
        return 1;
    }

    int countNumbers(int n) {
        int count=0;
        for(int i=0; i<=n; i++)
            if(check(i) == 1)
                count++;
                
        return count;
    }
};