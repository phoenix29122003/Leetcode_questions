class Solution {
public:
    vector<vector<int>>dp;
    int solve(vector<vector<int>>& grid, int i, int j,int m,int n) 
    {
        if(i<0 || j<0 || i>=m || j>=n) return 0; 
        if(grid[i][j]) return dp[i][j]=0;
        if(i==m-1 && j==n-1) return 1; 
        if(dp[i][j]) return dp[i][j];  
        return dp[i][j]=solve(grid,i+1,j,m,n)+solve(grid,i,j+1,m,n); 
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) 
    {
        int m=size(grid),n=size(grid[0]);
        dp.resize(m, vector<int>(n));
        return solve(grid,0,0,m,n);
    }
};