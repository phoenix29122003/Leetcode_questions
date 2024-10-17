class Solution {
public:
    int solve(vector<int>&nums,int idx,int n,vector<int>&dp){
        if(idx>=n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int rob=nums[idx]+solve(nums,idx+2,n,dp);
        int not_rob=solve(nums,idx+1,n,dp);
        return dp[idx]=max(rob,not_rob);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,0,nums.size(),dp);
    }
};