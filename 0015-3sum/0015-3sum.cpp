class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            long long x=0-long(nums[i]);
            int j=i+1,k=n-1;
            while(j<k)
            {
                if(nums[j]+nums[k]==x)
                {
                    ans.push_back({nums[i],nums[j++],nums[k--]});
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
                else if(nums[j]+nums[k]<x) j++;
                else k--;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};


