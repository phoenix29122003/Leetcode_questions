class Solution {
public:
    int solve(vector<int>&nums,int idx,int n,vector<int>&dp){
        if(idx==n-1) return 1;
        else if(idx>=n) return 0;
        else if(nums[idx]==0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        bool flag=0;
        for(int i=1;i<=nums[idx];i++){
            if(solve(nums,idx+i,n,dp)){
                flag=1;
                break;
            }
        }
        return dp[idx]=flag;
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,0,nums.size(),dp);
    }
};