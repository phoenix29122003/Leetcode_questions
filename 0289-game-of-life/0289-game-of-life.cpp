class Solution {
public:
    int solve(vector<vector<int>>& dummy_board,int i,int j,int m,int n){
        int cnt=0;
        if(i-1>=0 && dummy_board[i-1][j]==1) cnt+=1;
        if(i+1<m && dummy_board[i+1][j]==1) cnt+=1;
        if(j-1>=0 && dummy_board[i][j-1]==1) cnt+=1;
        if(j+1<n && dummy_board[i][j+1]==1) cnt+=1;
        if(i-1>=0 && j-1>=0 && dummy_board[i-1][j-1]==1) cnt+=1;
        if(i+1<m && j+1<n && dummy_board[i+1][j+1]==1) cnt+=1;
        if(i+1<m && j-1>=0 && dummy_board[i+1][j-1]==1) cnt+=1;
        if(i-1>=0 && j+1<n &&dummy_board[i-1][j+1]==1) cnt+=1;
        return cnt;
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>dummy_board=board;
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int cnt=solve(dummy_board,i,j,m,n);
                if(board[i][j]==0 && cnt==3){
                    board[i][j]=1;
                }
                else if(board[i][j]==1 && cnt<2) board[i][j]=0;
                else if(board[i][j]==1 && cnt>3) board[i][j]=0;
                else if(board[i][j]==1 && (cnt==2 || cnt==3)) board[i][j]=1;
            }
        }
    }
};