class Solution {
public:
    int help(vector<vector<int>>& board,int i,int j,int n,int m)
    {
        int c=0;
        if(i>0) if(board[i-1][j]==1 || board[i-1][j]==3) c++;
        if(j>0) if(board[i][j-1]==1 || board[i][j-1]==3) c++;
        if(i<n-1) if(board[i+1][j]==1 || board[i+1][j]==3) c++;
        if(j<m-1) if(board[i][j+1]==1 || board[i][j+1]==3) c++;
        if(i>0 && j>0) if(board[i-1][j-1]==1 || board[i-1][j-1]==3) c++;
        if(i>0 && j<m-1) if(board[i-1][j+1]==1 || board[i-1][j+1]==3) c++;
        if(i<n-1 && j>0) if(board[i+1][j-1]==1 || board[i+1][j-1]==3) c++;
        if(i<n-1 && j<m-1) if(board[i+1][j+1]==1 || board[i+1][j+1]==3) c++;
        return c;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int c=help(board,i,j,n,m);
                if(board[i][j]==0)
                {
                    if(c==3) board[i][j]=2;
                }
                else if(board[i][j]==1)
                {
                    if(c<2 || c>3) board[i][j]=3;
                    if(c==2 || c==3) board[i][j]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==2) board[i][j]=1;
                else if(board[i][j]==3) board[i][j]=0;
		    }
	    }
    }
};