class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        if(nums.size()<4) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                long long x=target-long(nums[i]+nums[j]);
                int l=j+1,r=nums.size()-1;
                while(l<r)
                {
                    if(nums[l]+nums[r]<x) l++;
                    else if(nums[l]+nums[r]>x) r--;
                    else 
                    {
                        ans.push_back({nums[i],nums[j],nums[l++],nums[r--]});
                        while(l<r && nums[l]==nums[l-1]) l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                    }
                }
                while(j+1<nums.size() && nums[j]==nums[j+1]) j++;
            }
            while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};