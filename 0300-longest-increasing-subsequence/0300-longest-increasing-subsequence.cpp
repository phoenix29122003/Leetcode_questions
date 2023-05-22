class Solution {
public:
    int solve(vector<int>&nums,int idx,int prev,vector<vector<int>>&dp)
    {
        if(idx==nums.size()) return 0;
        if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];
        int take=0;
        if(prev==-1 || nums[idx]>nums[prev]) take=1+solve(nums,idx+1,idx,dp);
        int not_take=solve(nums,idx+1,prev,dp);
        return dp[idx][prev+1]=max(take,not_take);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return solve(nums,0,-1,dp);
    }
};