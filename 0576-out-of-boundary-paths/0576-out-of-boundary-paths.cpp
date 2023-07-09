class Solution {
public:
    int mod=pow(10,9)+7;
    int dp[51][51][51];
    int solve(int m,int n,int N,int x,int y){
        if(x<0 || y<0 || x>=m || y>=n) return 1;
        if(N<=0) return 0;
        if(dp[N][x][y]!=-1) return dp[N][x][y]%mod;
        int ans=0;
        ans=(ans+solve(m,n,N-1,x,y-1))%mod;
        ans=(ans+solve(m,n,N-1,x-1,y))%mod;
        ans=(ans+solve(m,n,N-1,x+1,y))%mod;
        ans=(ans+solve(m,n,N-1,x,y+1))%mod;
        dp[N][x][y]=ans;
        return dp[N][x][y]%mod;
    }
    int findPaths(int m, int n, int N, int i, int j) {
        memset(dp,-1,sizeof(dp));
        dp[N][m][n]=solve(m,n,N,i,j);
        return dp[N][m][n];
    }
};