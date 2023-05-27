class Solution {
public:
    int dp[51][51][51];
    int solve(vector<vector<int>>&grid,int r1,int c1,int c2,int n)
    {
        int r2=c1+r1-c2;
        if(r1>=n || c1>=n || r2>=n || c2>=n || grid[r1][c1]==-1 || grid[r2][c2]==-1) return INT_MIN;
        if(dp[r1][c1][c2]!=-1) return dp[r1][c1][c2];
        if(r1==n-1 && c1==n-1) return grid[r1][c1];
        int ans=grid[r1][c1];
        if(r1!=r2) ans+=grid[r2][c2];
        int temp=max({solve(grid,r1+1,c1,c2,n),solve(grid,r1,c1+1,c2+1,n),solve(grid,r1+1,c1,c2+1,n),solve(grid,r1,c1+1,c2,n)});
        ans+=temp;
        return dp[r1][c1][c2]=ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return max(0,solve(grid,0,0,0,grid.size()));
    }
};