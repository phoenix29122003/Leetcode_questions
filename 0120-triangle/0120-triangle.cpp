class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>& grid,int r,int c,int n){
        if(r==n-1) return grid[r][c];
        if(dp[r][c]!=-1) return dp[r][c];
        return dp[r][c]=grid[r][c]+min(solve(grid,r+1,c,n),solve(grid,r+1,c+1,n));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof(dp));
        return solve(triangle,0,0,triangle.size());
    }
};