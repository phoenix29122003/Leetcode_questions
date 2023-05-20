class Solution {
public:
    bool dfs(vector<vector<char>>& board,string word,int idx,int i,int j,int m,int n)
    {
        if(idx==word.length()) return true;
        if(i<0 || j<0 || i>=m || j>=n) return false;
        bool ans=false;
        if(board[i][j]==word[idx])
        {
            board[i][j]='*';
            ans=dfs(board,word,idx+1,i+1,j,m,n)||dfs(board,word,idx+1,i-1,j,m,n)||dfs(board,word,idx+1,i,j-1,m,n)||dfs(board,word,idx+1,i,j+1,m,n);
            board[i][j]=word[idx];
        }
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0]) 
                {
                    if(dfs(board,word,0,i,j,m,n)) return true;
                }
            }
        }
        return false;
    }
};