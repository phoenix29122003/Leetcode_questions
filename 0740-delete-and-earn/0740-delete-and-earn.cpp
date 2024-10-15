class Solution {
public:
    int solve(vector<int>&nums,int idx,int n,vector<int>&dp){
        if(idx>=n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int sum=0;
        int not_skip=idx;
        while(not_skip<n && nums[not_skip]==nums[idx]){
            sum+=nums[not_skip];
            not_skip++;
        }
        int skip=not_skip;
        while(skip<n && nums[skip]==nums[idx]+1) skip++;
        return dp[idx]=max(sum+solve(nums,skip,n,dp),solve(nums,not_skip,n,dp));
    }
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,0,nums.size(),dp);
    }
};