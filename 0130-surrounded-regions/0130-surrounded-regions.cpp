class Solution {
public:
    void dfs(vector<vector<char>>&grid,int i,int j,int m,int n,char ch){
        if(i<0 || j<0 || i==m || j==n || grid[i][j]!='O') return;
        grid[i][j]=ch;
        dfs(grid,i-1,j,m,n,ch);
        dfs(grid,i+1,j,m,n,ch);
        dfs(grid,i,j-1,m,n,ch);
        dfs(grid,i,j+1,m,n,ch);
    }
    void solve(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==0 || i==m-1 || j==n-1)&& grid[i][j]=='O'){
                    dfs(grid,i,j,m,n,'#');
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='O') dfs(grid,i,j,m,n,'X');
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='#') grid[i][j]='O';
            }
        }
    }
};