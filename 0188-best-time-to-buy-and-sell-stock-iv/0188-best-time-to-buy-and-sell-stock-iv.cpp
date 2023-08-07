class Solution {
public:
    int dp[1001][2][101];
    int solve(vector<int>nums,int idx,int buy,int k,int n){
        if(k==0) return 0;
        if(idx==n) return 0;
        if(dp[idx][buy][k]!=-1) return dp[idx][buy][k];
        int nottake=solve(nums,idx+1,buy,k,n);
        int take=0;
        if(buy) take=-nums[idx]+solve(nums,idx+1,0,k,n);
        else take=nums[idx]+solve(nums,idx+1,1,k-1,n);
        return dp[idx][buy][k]=max(nottake,take);
    }
    int maxProfit(int k, vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,1,k,nums.size());
    }
};