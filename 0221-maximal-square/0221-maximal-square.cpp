class Solution {
public:
    int dp[301][301];
    int solve(vector<vector<char>>& grid,int i,int j,int m,int n){
        if(i>=m || j>=n || grid[i][j]=='0') return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=1+min({solve(grid,i+1,j,m,n),solve(grid,i+1,j+1,m,n),solve(grid,i,j+1,m,n)});
    }
    int maximalSquare(vector<vector<char>>& grid) {
        memset(dp,-1,sizeof(dp));
        int ans=INT_MIN,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                ans=max(ans,solve(grid,i,j,m,n));
        return ans==INT_MIN?0:ans*ans;
    }
};