class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums) mp[it]++;
        int ans,n=nums.size();
        for(auto it:mp)
        {
            if(it.second>n/2) ans=it.first;
        }
        return ans;
    }
};