class Solution {
public:
    void dfs(vector<vector<int>>&grid,int i,int j,int m,int n,int col){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=0) return;
        grid[i][j]=col;
        dfs(grid,i-1,j,m,n,col),dfs(grid,i+1,j,m,n,col),dfs(grid,i,j-1,m,n,col),dfs(grid,i,j+1,m,n,col);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0 || i==m-1 || j==n-1) dfs(grid,i,j,m,n,2);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    ans++;
                    dfs(grid,i,j,m,n,2);
                }
            }
        }
        return ans;
    }
};