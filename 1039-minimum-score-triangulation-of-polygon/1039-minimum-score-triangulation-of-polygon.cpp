class Solution {
public:
    int solve(vector<int>nums,int s,int e,vector<vector<int>>&dp)
    {
        if(s+1==e) return 0;
        if(dp[s][e]!=-1) return dp[s][e];
        int ans=INT_MAX;
        for(int cut=s+1;cut<e;cut++)
        {
            int left=solve(nums,s,cut,dp);
            int right=solve(nums,cut,e,dp);
            int res=left+nums[s]*nums[cut]*nums[e]+right;
            ans=min(ans,res);
        }
        return dp[s][e]=ans;
    }
    int minScoreTriangulation(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(nums,0,n-1,dp);
    }
};