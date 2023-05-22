class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        vector<int>ldp(nums.size(),1);
        vector<int>rdp(nums.size(),1);
        for(int i=1;i<nums.size();i++)
            for(int j=0;j<i;j++)
                if(nums[i]>nums[j]) ldp[i]=max(ldp[i],ldp[j]+1);
        for(int i=nums.size()-2;i>=0;i--)
            for(int j=nums.size()-1;j>i;j--)
                if(nums[i]>nums[j]) rdp[i]=max(rdp[i],rdp[j]+1);
        int maxi=0;
        for(int i=1;i<nums.size()-1;i++)
        {
            if(ldp[i]>1 && rdp[i]>1)
            {
                int ans=ldp[i]+rdp[i]-1;
                maxi=max(maxi,ans);
            }
        }
        return nums.size()-maxi;
    }
};