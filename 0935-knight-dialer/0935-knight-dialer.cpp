class Solution {
public:
    int mod=1e9+7;
    long solve(int i,int j,int n,vector<vector<vector<long>>>&dp){
        if(i<0 || j<0 || i>=4 || j>=3 || (i==3 && j==0) || (i==3 && j==2)) return 0;
        if(n==1) return 1;
        if(dp[i][j][n]!=-1) return dp[i][j][n];
        return dp[i][j][n]=(solve(i-2,j-1,n-1,dp)%mod+solve(i-2,j+1,n-1,dp)%mod+
                           solve(i-1,j-2,n-1,dp)%mod+solve(i-1,j+2,n-1,dp)%mod+
                           solve(i+1,j-2,n-1,dp)%mod+solve(i+1,j+2,n-1,dp)%mod+
                           solve(i+2,j-1,n-1,dp)%mod+solve(i+2,j+1,n-1,dp)%mod)%mod;
    }
    int knightDialer(int n) {
        vector<vector<vector<long>>>dp(5,vector<vector<long>>(4,vector<long>(n+1,-1)));
        long ans=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                ans=(ans+solve(i,j,n,dp))%mod;
            }
        }
        return (int)ans;
    }
};