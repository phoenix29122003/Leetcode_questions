class Solution {
public:
    vector<int>dp;
    bool fun(vector<int>&nums,int idx)
    {
        if(idx >=nums.size()) return 0;
        if(idx == nums.size()-1) return 1;
        if(dp[idx]!=-1) return dp[idx];
        for(int i=1;i<=nums[idx];i++)
        {
            if(fun(nums,idx+i)==true) return dp[idx]=1;
        }
        return dp[idx]=0;
    }
    bool canJump(vector<int>& nums) {
        dp.resize(nums.size(),-1);
        return fun(nums,0); 
    }
};