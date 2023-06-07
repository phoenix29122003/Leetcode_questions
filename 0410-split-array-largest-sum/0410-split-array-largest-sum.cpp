class Solution {
public:
    bool solve(vector<int>nums,int m,int k)
    {
        int cnt=1,curr_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(curr_sum+nums[i]<=m) curr_sum+=nums[i];
            else curr_sum=nums[i],cnt++;
        }
        return cnt<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int l=0,r=0,ans=INT_MAX;
        for(auto it:nums) l=max(l,it),r+=it;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(solve(nums,m,k)) ans=m,r=m-1;
            else l=m+1;
        }
        return ans;
    }
};