class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==2 || mp[nums[i]]>2) 
            {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};