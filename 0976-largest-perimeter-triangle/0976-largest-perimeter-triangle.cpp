class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i+1<n && i+2<n)
            {
                if((nums[i]+nums[i+1]>nums[i+2])&&(nums[i+1]+nums[i+2]>nums[i])&&(nums[i+2]+nums[i]>nums[i+1])) ans=max(ans,nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        return ans;
    }
};