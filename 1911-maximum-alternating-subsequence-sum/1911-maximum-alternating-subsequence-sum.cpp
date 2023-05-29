class Solution {
public:
    long long dp[100001][2];
    long long solve(vector<int>&nums,int idx,bool sign)
    {
        if(idx==nums.size()) return 0;
        if(dp[idx][sign]!=-1) return dp[idx][sign];
        long long curr=sign?nums[idx]:-1*nums[idx];
        return dp[idx][sign]=max(curr+solve(nums,idx+1,!sign),solve(nums,idx+1,sign));
    }
    long long maxAlternatingSum(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,true);
    }
};