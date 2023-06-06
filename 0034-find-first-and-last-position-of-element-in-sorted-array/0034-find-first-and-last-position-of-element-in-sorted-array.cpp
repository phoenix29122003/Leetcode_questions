class Solution {
public:
    int bs(vector<int>nums,int target,int flag)
    {
        int l=0,r=nums.size()-1,m;
        int ans=-1;
        while(l<=r)
        {
            m=(l+r)/2;
            if(nums[m]==target)
            {
                if(flag==0) ans=m,r=m-1;
                else ans=m,l=m+1;
            }
            else if(nums[m]>target) r=m-1;
            else l=m+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {bs(nums,target,0),bs(nums,target,1)};
    }
};