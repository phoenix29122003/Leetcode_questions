class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size(),ans;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]>n/2)
            {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};