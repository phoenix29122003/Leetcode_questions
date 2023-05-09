class Solution {
public:
    int solve(vector<int>&nums,int idx,vector<int>&dp)
    {
        if(idx>=nums.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int take=nums[idx]+solve(nums,idx+2,dp);
        int nottake=0+solve(nums,idx+1,dp);
        return dp[idx]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,0,dp);
    }
};