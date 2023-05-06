class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int l=i+1;l<n;l++)
            {
                long long x=target-long(nums[i]+nums[l]);
                int j=l+1,k=n-1;
                while(j<k)
                {
                    if(nums[j]+nums[k]==x)
                    {
                        ans.push_back({nums[i],nums[l],nums[j++],nums[k--]});
                        while(j<k && nums[j]==nums[j-1]) j++;
                        while(j<k && nums[k]==nums[k+1]) k--;
                    }
                    else if(nums[j]+nums[k]<x) j++;
                    else k--;
                }
                while(l+1<n && nums[l]==nums[l+1]) l++;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};