class Solution {
public:
    bool dfs(vector<vector<char>>& board,int idx,int i,int j,string word)
    {
        if(idx==word.length()) return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size()) return false;
        bool ans=false;
        if(board[i][j]==word[idx])
        {
            board[i][j]='*';
            ans=dfs(board,idx+1,i+1,j,word)||dfs(board,idx+1,i-1,j,word)||dfs(board,idx+1,i,j-1,word)||dfs(board,idx+1,i,j+1,word);
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
                    if(dfs(board,0,i,j,word)) return true;
                }
            }
        }
        return false;
    }
};