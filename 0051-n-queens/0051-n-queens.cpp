class Solution {
public:   
    bool issafe(vector<string>&board,int c,int r,int n){
        int i=r,j=c;
        while(i>=0 && j>=0) if(board[i--][j--]=='Q') return false;
        i=r,j=c;
        while(j>=0) if(board[i][j--]=='Q') return false;
        i=r,j=c;
        while(i<n && j>=0) if(board[i++][j--]=='Q') return false;
        return true;
    }
    void solve(int c,vector<string>&board,vector<vector<string>>&ans,int n)
    {
        if(c==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(issafe(board,c,i,n)){
                board[i][c]='Q';
                solve(c+1,board,ans,n);
                board[i][c]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++) board[i]=s;
        solve(0,board,ans,n);
        return ans;
    }
};