class Solution {
public:
    int solve(vector<int>&nums,int target,int curr,vector<int>&dp)
    {
        if(curr>target) return 0;
        if(target==curr) return 1;
        if(dp[curr]!=-1) return dp[curr];
        int ans=0;
        for(int i=0;i<nums.size();i++)
            ans+=solve(nums,target,curr+nums[i],dp);
        return dp[curr]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        if(nums.size()==0 || target==0) return 0;
        vector<int>dp(target+1,-1);
        return solve(nums,target,0,dp);
    }
};