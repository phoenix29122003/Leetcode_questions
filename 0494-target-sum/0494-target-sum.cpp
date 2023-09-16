class Solution {
public:
    int dp[21][4000];
    int solve(vector<int>nums,int idx,int n,int target){
        if(idx==n && target==0) return 1;
        if(idx==n && target!=0) return 0;
        if(dp[idx][target+1000]!=-1) return dp[idx][target+1000];
        return dp[idx][target+1000]=solve(nums,idx+1,n,target-nums[idx])+solve(nums,idx+1,n,target+nums[idx]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,nums.size(),target);
    }
};