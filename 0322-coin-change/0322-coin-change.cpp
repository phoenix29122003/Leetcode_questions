class Solution {
public:
    int solve(vector<int>&nums,int idx,int amount,vector<vector<int>>&dp)
    {
        if(amount==0) return 0;
        if(idx==nums.size() || amount<0) return INT_MAX-1;
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        int ans=INT_MAX;
        ans=min(1+solve(nums,idx,amount-nums[idx],dp),solve(nums,idx+1,amount,dp));
        return dp[idx][amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans=solve(coins,0,amount,dp);
        return ans>=INT_MAX-1?-1:ans;
    }
};