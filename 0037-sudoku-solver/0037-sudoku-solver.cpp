class Solution {
public:
    bool issafe(vector<vector<char>>& board,int r,int c,char ch){
        for(int i=0;i<9;i++){
            if(board[i][c]==ch) return false;
            if(board[r][i]==ch) return false;
            if(board[3*(r/3)+i/3][3*(c/3)+i%3]==ch) return false;
        } 
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char ch='1';ch<='9';ch++){
                        if(issafe(board,i,j,ch)){
                            board[i][j]=ch;
                            if(solve(board)) return true;
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};