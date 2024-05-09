class Solution {
  public:
    string longest(int n, vector<string> &names) {
        string x = names[0];
        for(int i=0; i<n; i++)
            if(names[i].length() > x.length())
                x = names[i];
                
        return x;
    }
};