class Solution {
public:
    bool solve(vector<vector<char>>&board, string word, int idx,int i,int j,int m,int n,int o){
        if(idx==word.size()) return true;
        if(i>=m || j>=n || i<0 || j<0 || board[i][j]=='#') return false;
        int ans=false;
        if(board[i][j]==word[idx]){
            board[i][j]='#';
            ans=(solve(board,word,idx+1,i+1,j,m,n,o)||
                   solve(board,word,idx+1,i-1,j,m,n,o)||
                   solve(board,word,idx+1,i,j+1,m,n,o)||
                   solve(board,word,idx+1,i,j-1,m,n,o));
            board[i][j]=word[idx];
        }
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size(),o=word.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(solve(board,word,0,i,j,m,n,o)) return true;
                }
            }
        }
        return false;
    }
};