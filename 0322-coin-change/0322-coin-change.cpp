class Solution {
public:
    int solve(vector<int>&coins,int amount,int idx,vector<vector<int>>&dp)
    {
        if(amount==0) return 0;
        if(idx>=coins.size() || amount<0) return INT_MAX-1;
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        int ans=INT_MAX;
        ans=min(1+solve(coins,amount-coins[idx],idx,dp),solve(coins,amount,idx+1,dp));
        return dp[idx][amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans=solve(coins,amount,0,dp);
        return ans>=INT_MAX-1?-1:ans;
    }
};