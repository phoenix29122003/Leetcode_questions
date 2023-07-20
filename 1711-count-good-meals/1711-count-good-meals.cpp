class Solution {
public:
    int countPairs(vector<int>& nums) {
        long long ans=0;
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            for(int i=1;i<=(1<<22);i*=2)
            {
                if(mp.find(i-it)!=mp.end()) ans+=mp[i-it];   
            }
            mp[it]++;
        }
        return ans%(int)(1e9+7);
    }
};