class Solution {
public:
    int dp[20001];
    int solve(vector<int>&nums,int idx){
        if(idx>=nums.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int curr=nums[idx];
        int i=idx,sum=0;
        while(i<nums.size() && nums[i]==curr) i++,sum+=curr;
        int j=i;
        while(j<nums.size() && nums[j]==curr+1) j++;
        int nottake=solve(nums,i);
        int take=sum+solve(nums,j);
        return dp[idx]=max(take,nottake);
    }
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }
};