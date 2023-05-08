class Solution {
public:
    int solve(vector<int>& coins,int idx,int n,int amount,vector<vector<int>>&dp)
    {
        if(amount==0) return 0;
        if(idx>=n || amount<0) return INT_MAX-1;
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        int ans=INT_MAX;
        ans=min(1+solve(coins,idx,n,amount-coins[idx],dp),solve(coins,idx+1,n,amount,dp));
        return dp[idx][amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans=solve(coins,0,coins.size(),amount,dp);
        return (ans<INT_MAX-1)?ans:-1;
    }
};