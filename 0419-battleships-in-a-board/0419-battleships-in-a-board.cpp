class Solution {
public:
    void dfs(vector<vector<char>>&board,int i,int j,int m,int n)
    {
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='.') return;
        board[i][j]='.';
        dfs(board,i-1,j,m,n);
        dfs(board,i+1,j,m,n);
        dfs(board,i,j-1,m,n);
        dfs(board,i,j+1,m,n);
    }
    int countBattleships(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size(),ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='X')
                {
                    ans++;
                    dfs(board,i,j,m,n);
                }
            }
        }
        return ans;
    }
};