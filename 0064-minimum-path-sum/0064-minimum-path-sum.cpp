class Solution {
public:
    int solve(vector<vector<int>>&grid,int i,int j,int m,int n,vector<vector<int>>&dp)
    {
        if(i>=m || j>=n) return INT_MAX;
        if(i==m-1 && j==n-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=grid[i][j]+min({solve(grid,i+1,j,m,n,dp),solve(grid,i,j+1,m,n,dp)});
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(201,vector<int>(201,-1));
        return solve(grid,0,0,grid.size(),grid[0].size(),dp);
    }
};