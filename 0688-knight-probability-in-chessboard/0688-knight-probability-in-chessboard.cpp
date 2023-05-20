class Solution {
public:
    double dp[26][26][101];
    double solve(int n,int k,int r,int c)
    {
        if(r<0 || c<0 || r>=n || c>=n) return 0;
        if(k==0) return 1;
        if(dp[r][c][k]) return dp[r][c][k];
        double sum=0;
        sum+=solve(n,k-1,r-2,c-1)+solve(n,k-1,r-1,c-2)+ 
             solve(n,k-1,r+2,c+1)+solve(n,k-1,r+1,c+2)+ 
             solve(n,k-1,r-2,c+1)+solve(n,k-1,r+2,c-1) +
             solve(n,k-1,r-1,c+2)+solve(n,k-1,r+1,c-2);
        return dp[r][c][k]=sum/8;
    }
    double knightProbability(int n, int k, int r, int c) {
        return solve(n,k,r,c);
    }
};