class Solution {
public:
    int dp[101];
    int solve(vector<int>&nums,int idx,int n){
        if(idx>=n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int take=nums[idx]+solve(nums,idx+2,n);
        int nottake=solve(nums,idx+1,n);
        return dp[idx]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,nums.size());
    }
};