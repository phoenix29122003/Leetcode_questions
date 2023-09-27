class Solution {
public:
    int dp[501][501];
    int solve(vector<int>& nums,int l,int r){
        if(r<l) return 0;
        if(dp[l][r]!=-1) return dp[l][r];
        int op1=nums[l]+min(solve(nums,l+2,r),solve(nums,l+1,r-1));
        int op2=nums[r]+min(solve(nums,l+1,r-1),solve(nums,l,r-2));
        return dp[l][r]=max(op1,op2);
    }
    bool stoneGame(vector<int>& piles) {
        int sum=0;
        memset(dp,-1,sizeof(dp));
        for(auto it:piles) sum+=it;
        int ans=solve(piles,0,piles.size()-1);
        return ans>(sum-ans);
    }
};