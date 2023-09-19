class Solution {
public:
    int dp[21][3000];
    int solve(vector<int>nums,int idx,int target){
        if(idx==nums.size()) return target==0;
        if(dp[idx][target+1000]!=-1) return dp[idx][target+1000];
        return dp[idx][target+1000]=solve(nums,idx+1,target-nums[idx])+solve(nums,idx+1,target+nums[idx]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,target);
    }
};