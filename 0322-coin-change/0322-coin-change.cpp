class Solution {
public:
    int solve(vector<int>&nums,int idx,int n,int target,vector<vector<int>>&dp){
        if(target==0) return 0;
        if(target<0) return 100000007;
        if(idx==n){
            return target==0?0:100000007;
        }
        if(dp[idx][target]!=-1) return dp[idx][target];
        int take=1+solve(nums,idx,n,target-nums[idx],dp);
        int nottake=solve(nums,idx+1,n,target,dp);
        return dp[idx][target]=min(take,nottake);
    }
    int coinChange(vector<int>& nums, int target) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(target+1,-1));
        int ans=solve(nums,0,nums.size(),target,dp);
        return ans>=100000007?-1:ans;
    }
};