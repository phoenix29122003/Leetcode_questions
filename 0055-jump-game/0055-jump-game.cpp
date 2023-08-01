class Solution {
public:
    int dp[10001];
    bool solve(vector<int>&nums,int idx,int n){
        if(idx==n-1) return true;
        else if(idx>=n) return false;
        if(nums[idx]==0) return false;
        if(dp[idx]!=-1) return dp[idx];
        int ans=false;
        for(int i=1;i<=nums[idx];i++){
            if(solve(nums,idx+i,n)) {
                ans=true;
                break;
            }
        }
        return dp[idx]=ans;
    }
    bool canJump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,nums.size());
    }
};