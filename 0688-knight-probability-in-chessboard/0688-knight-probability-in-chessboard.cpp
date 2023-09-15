class Solution {
public:
    double dp[26][26][101];
    double solve(int r,int c,int k,int n){
        if(r<0 || r>=n || c<0 || c>=n) return 0;
        if(k==0) return 1;
        if(dp[r][c][k]) return dp[r][c][k];
        double sum=0;
        sum+=solve(r-2,c-1,k-1,n)+solve(r-2,c+1,k-1,n)+
             solve(r-1,c-2,k-1,n)+solve(r-1,c+2,k-1,n)+
             solve(r+1,c-2,k-1,n)+solve(r+1,c+2,k-1,n)+
             solve(r+2,c-1,k-1,n)+solve(r+2,c+1,k-1,n);
        return dp[r][c][k]=sum/8;
    }
    double knightProbability(int n, int k, int r, int c) {
        return solve(r,c,k,n);
    }
};