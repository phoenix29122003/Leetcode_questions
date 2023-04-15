class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size()<3) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
                long long x=0-long(nums[i]);
                int l=i+1,r=nums.size()-1;
                while(l<r)
                {
                    if(nums[l]+nums[r]<x) l++;
                    else if(nums[l]+nums[r]>x) r--;
                    else 
                    {
                        ans.push_back({nums[i],nums[l++],nums[r--]});
                        while(l<r && nums[l]==nums[l-1]) l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                    }
                }
            while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};




