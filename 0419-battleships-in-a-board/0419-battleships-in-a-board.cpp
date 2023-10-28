class Solution {
public:
    void dfs(vector<vector<char>>&grid,int i,int j,int m,int n){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='.') return;
        grid[i][j]='.';
        dfs(grid,i-1,j,m,n);
        dfs(grid,i+1,j,m,n);
        dfs(grid,i,j-1,m,n);
        dfs(grid,i,j+1,m,n);
    }
    int countBattleships(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='X'){
                    dfs(grid,i,j,m,n);
                    ans++;
                }
            }
        }
        return ans;
    }
};