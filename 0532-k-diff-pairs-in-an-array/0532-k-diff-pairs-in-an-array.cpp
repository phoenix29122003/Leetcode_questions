class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans=0;
        map<int,int>mp;
        for(auto it:nums) mp[it]++;
        for(auto it:mp){
            if(k==0){
                if(it.second>=2) ans++;
            }
            else {
                if(mp.find(it.first-k)!=mp.end()) ans++;
            }
        }
        return ans;
    }
};