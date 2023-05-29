class Solution {
public:
    int dp[20001];
    int solve(vector<int>nums,int idx)
    {
        if(idx>=nums.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int curr=nums[idx];
        int sum=nums[idx];
        int i=idx+1;
        while(i<nums.size() && nums[i]==curr) sum+=nums[i++];
        int j=i;
        while(j<nums.size() && nums[j]==curr+1) j++;
        return dp[idx]=max(sum+solve(nums,j),solve(nums,i));
    }
    int deleteAndEarn(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        sort(nums.begin(),nums.end());
        return solve(nums,0);
    }
};