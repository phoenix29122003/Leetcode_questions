class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size(),ans=0,diff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int x=target-nums[i];
            int l=i+1,r=n-1;
            while(l<r)
            {
                if(abs(nums[l]+nums[r]-x)==0) return nums[i]+nums[l]+nums[r];
                else if(abs(nums[l]+nums[r]-x)<diff) 
                {
                    diff=abs(nums[l]+nums[r]-x);
                    ans=nums[i]+nums[l]+nums[r];
                }
                else if(nums[l]+nums[r]<x) l++;
                else r--;
            }
        }
        return ans;
    }
};