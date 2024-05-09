class Solution{
public:
	
	bool fascinating(int n) {
	    bool found = true;
        string x;
        if(n>99 && n<1000)
            x = to_string(n) + to_string(n*2) + to_string(n*3);
        
        for(char ch='1'; ch<='9'; ch++){
            int count=0;
            for(int i=0; i<9; i++)
                if(x[i] == ch)
                    count++;
            
            if(count>1 || count==0){
                found = false;
                break;
            }
        }
        return found;
	}
};