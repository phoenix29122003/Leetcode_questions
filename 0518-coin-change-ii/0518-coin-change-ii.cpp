class Solution {
public:
    int dp[5001][301];
    int solve(vector<int>&coins,int amount,int n)
    {
        if(n==0 || amount==0) return amount==0?1:0;
        if(dp[amount][n]!=-1) return dp[amount][n];
        if(coins[n-1]>amount) return dp[amount][n]=solve(coins,amount,n-1);
        else return dp[amount][n]=solve(coins,amount,n-1)+solve(coins,amount-coins[n-1],n);
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return solve(coins,amount,coins.size());
    }
};