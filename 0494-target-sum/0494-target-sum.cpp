class Solution {
public:
    int solve(vector<int>&nums,int idx,int target,int curr,vector<vector<int>>&dp)
    {
        if(idx==nums.size()) return curr==target?1:0;
        if(dp[idx][curr+1000]!=-1) return dp[idx][curr+1000];
        return dp[idx][curr+1000]=solve(nums,idx+1,target,curr+nums[idx],dp)+solve(nums,idx+1,target,curr-nums[idx],dp);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<vector<int>>dp(21,vector<int>(2001,-1));
        return solve(nums,0,target,0,dp);
    }
};