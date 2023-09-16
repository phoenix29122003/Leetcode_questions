class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>& grid,int i,int j,int m,int n){
        if(i==m-1 && j==n-1) return grid[i][j];
        if(i==m || j==n) return 1000006;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=grid[i][j]+min(solve(grid,i+1,j,m,n),solve(grid,i,j+1,m,n));
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return solve(grid,0,0,grid.size(),grid[0].size());
    }
};