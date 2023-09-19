class Solution {
public:
    bool issafe(vector<vector<int>>&board,int r,int c,int n){
        int i=r,j=c;
        while(i>=0 && j>=0) if(board[i--][j--]==1) return false; 
        i=r,j=c;
        while(j>=0) if(board[i][j--]==1) return false; 
        i=r,j=c;
        while(i<n && j>=0) if(board[i++][j--]==1) return false; 
        return true;
    }
    void solve(vector<vector<int>>&board,int c,int n,int &ans){
        if(c==n){
            ans++;
            return;
        }
        for(int r=0;r<n;r++){
            if(issafe(board,r,c,n)){
                board[r][c]=1;
                solve(board,c+1,n,ans);
                board[r][c]=0;
            }
        }
    }
    int totalNQueens(int n) {
        int ans=0;
        vector<vector<int>>board(n,vector<int>(n,0));
        solve(board,0,n,ans);
        return ans;
    }
};