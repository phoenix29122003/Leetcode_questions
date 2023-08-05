class Solution {
public:
    int dp[13][10001];
    int solve(vector<int>&nums,int idx,int target){
        if(target==0) return 0;
        if(idx>=nums.size() || target<0) return INT_MAX-1;
        if(dp[idx][target]!=-1) return dp[idx][target];
        int take=1+solve(nums,idx,target-nums[idx]);
        int nottake=solve(nums,idx+1,target);
        return dp[idx][target]=min(take,nottake);
    }
    int coinChange(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        int ans=solve(nums,0,target);
        return ans>=INT_MAX-1?-1:ans;
    }
};