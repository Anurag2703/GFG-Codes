// Level: EASY

class Solution {
    public:
        vector<int> bracketNumbers(string str) {
            stack<int>s;
            int open=1;
            vector<int>v;
            for(auto x : str){
                if(x == '('){
                    v.push_back(open);
                    s.push(open++);
                }else if(x == ')'){
                    int currTop = s.top();
                    v.push_back(currTop);
                    s.pop();
                }
            }
            
            return v;
        }
};