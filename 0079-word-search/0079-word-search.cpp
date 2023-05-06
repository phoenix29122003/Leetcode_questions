class Solution {
public:
    bool dfs(vector<vector<char>>& board,string word,int i,int j,int idx)
    {
        if(idx==word.length()) return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size()) return false;
        bool ans=false;
        if(board[i][j]==word[idx])
        {
            board[i][j]='*';
            ans=dfs(board,word,i+1,j,idx+1) || dfs(board,word,i-1,j,idx+1) || dfs(board,word,i,j+1,idx+1) || dfs(board,word,i,j-1,idx+1);
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
                    if(dfs(board,word,i,j,0)) return true;
                }
            }
        }
        return false;
    }
};