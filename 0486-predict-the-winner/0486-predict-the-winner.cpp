class Solution {
public:
    int dp[21][21];
    int solve(vector<int>&nums,int i,int j){
        int n=nums.size();
        if((i>j)||(i>=n)||(j<0)) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int op1=nums[i]+min(solve(nums,i+2,j),solve(nums,i+1,j-1));
        int op2=nums[j]+min(solve(nums,i,j-2),solve(nums,i+1,j-1));
        return dp[i][j]=max(op1,op2);
    }
    bool predictTheWinner(vector<int>& nums) {
        int sum=0;
        memset(dp,-1,sizeof(dp));
        for(auto it:nums) sum+=it;
        int me=solve(nums,0,nums.size()-1);
        return me>=sum-me?true:false;
    }
};