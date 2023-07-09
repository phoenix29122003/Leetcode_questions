class Solution {
public:
    int mod=pow(10,9)+7;
    int solve(int m,int n,int N,int x,int y,vector<vector<vector<int>>>&dp){
        if(x<0 || y<0 || x>=m || y>=n) return 1;
        if(N<=0) return 0;
        if(dp[N][x][y]!=-1) return dp[N][x][y]%mod;
        int ans=0;
        ans=(ans+solve(m,n,N-1,x,y-1,dp))%mod;
        ans=(ans+solve(m,n,N-1,x-1,y,dp))%mod;
        ans=(ans+solve(m,n,N-1,x+1,y,dp))%mod;
        ans=(ans+solve(m,n,N-1,x,y+1,dp))%mod;
        dp[N][x][y]=ans;
        return dp[N][x][y]%mod;
    }
    int findPaths(int m, int n, int N, int i, int j) {
        vector<vector<vector<int>>>dp(N+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        dp[N][m][n]=solve(m,n,N,i,j,dp);
        return dp[N][m][n];
    }
};