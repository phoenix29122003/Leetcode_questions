class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>&grid,int i,int j,int m,int n,int prev){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]<=prev) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ele=grid[i][j];
        return dp[i][j]=1+max({solve(grid,i-1,j,m,n,ele),solve(grid,i+1,j,m,n,ele),solve(grid,i,j-1,m,n,ele),solve(grid,i,j+1,m,n,ele)});
    }
    int longestIncreasingPath(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int m=grid.size(),n=grid[0].size(),ans=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                ans=max(ans,solve(grid,i,j,m,n,-1));
        return ans;
    }
};