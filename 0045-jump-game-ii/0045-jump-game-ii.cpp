class Solution {
public:
    int solve(vector<int>&nums,int idx,int n,vector<int>&dp){
        if(idx==n-1) return 0;
        if(idx>=n) return 10000000;
        if(nums[idx]==0) return 10000000;
        if(dp[idx]!=-1) return dp[idx];
        int ans=INT_MAX;
        for(int i=1;i<=nums[idx];i++){
            int step=1+solve(nums,idx+i,n,dp);
            ans=min(ans,step);
        }
        return dp[idx]=ans;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,0,nums.size(),dp);
    }
};