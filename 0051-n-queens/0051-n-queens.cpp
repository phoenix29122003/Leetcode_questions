class Solution {
public:
    bool isvalid(vector<string>&board,int row,int col,int n){
        int i=row,j=col;
        while(i>=0 && j>=0) if(board[i--][j--]=='Q') return false;
        i=row,j=col;
        while(i<n && j>=0) if(board[i++][j--]=='Q') return false;
        i=row,j=col;
        while(j>=0) if(board[i][j--]=='Q') return false;
        return true;
    }
    void solve(int col,int n,vector<string>&board,vector<vector<string>>&ans){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isvalid(board,row,col,n)){
                board[row][col]='Q';
                solve(col+1,n,board,ans);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board;
        string s(n,'.');
        for(int i=0;i<n;i++) board.push_back(s);
        solve(0,n,board,ans);
        return ans;
    }
};