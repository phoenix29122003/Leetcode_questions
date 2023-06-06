class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto it:mp)
        {
            if(k==0) 
            {
                if(it.second>1) ans++;
            }
            else if(mp.find(it.first+k)!=mp.end()) ans++;
        }
        return ans;
    }
};