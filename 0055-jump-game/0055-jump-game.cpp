class Solution {
public:
    int solve(vector<int>& nums,vector<int>&dp,int pos)
    {
        if(pos==nums.size()-1) return true;
        else if(pos>=nums.size()) return false;
        else if(dp[pos]!=-1) return dp[pos];
        for(int i=1;i<=nums[pos];i++)
        {
            if(solve(nums,dp,pos+i)) return dp[pos]=true;
        }
        return dp[pos]=false;
    }
    bool canJump(vector<int>& nums) 
    {
        vector<int>dp(nums.size(),-1);
        return solve(nums,dp,0);
    }
};