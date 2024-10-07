class Solution {
public:
    int solve(int n,vector<int>&dp){
        if(dp[n]!=-1) return dp[n];
        if(n==0 || n==1) return n;
        dp[n]=solve(n-1,dp)+solve(n-2,dp);
        return dp[n];
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};