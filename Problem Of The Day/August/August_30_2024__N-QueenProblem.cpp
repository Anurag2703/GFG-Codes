// Level: HARD

class Solution{
    private:
        bool isSafe(int row,int col,int n,vector<string>&board){
            int duprow = row;
            int dupcol = col;
            while(row>=0 && col>=0){
                if(board[row][col]=='Q')
                    return false;
                row--;
                col--;
            }
            
            row = duprow;
            col = dupcol;
            while(col>=0){
                if(board[row][col]=='Q')
                    return false;
                    
                col--;
            }
            
            row = duprow;
            col = dupcol;
            while(row<n && col>=0){
                if(board[row][col]=='Q')
                    return false;
                    
                row++;
                col--;
            }
            return true;
        }
        
        void solve(int col,vector<string>&board,vector<vector<int>>&ans,int n){
            if(col==n){
                vector<int> boardint(n);
                for(int i = 0;i<n;i++){
                    for(int j = 0;j<n;j++){
                        if(board[i][j]=='Q'){
                            boardint[i]=j+1;
                        }
                    }
                }
                ans.push_back(boardint);
                return;
            }
            for(int row =0;row<n;row++){
                if(isSafe(row,col,n,board)){
                    board[row][col]='Q';
                    solve(col+1,board,ans,n);
                    board[row][col]='.';
                }
            }
        }
    
    public:
        vector<vector<int>> nQueen(int n) {
            // code here
            vector<vector<int>>ans;
            vector<string>b(n, string(n, '.'));
            
            solve(0, b, ans, n);
            sort(ans.begin(), ans.end());
            return ans;
        }
};