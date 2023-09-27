class Solution {
public:
    long long dp[100001][2];
    long long solve(vector<int>&nums,int idx,int n,int pos){
        if(idx>=n) return 0;
        if(dp[idx][pos]!=-1) return dp[idx][pos];
        long long pick,notpick;
        if(pos) pick=nums[idx]+solve(nums,idx+1,n,0);
        else pick=-nums[idx]+solve(nums,idx+1,n,1);
        notpick=solve(nums,idx+1,n,pos);
        return dp[idx][pos]=max(pick,notpick);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,nums.size(),1);
    }
};