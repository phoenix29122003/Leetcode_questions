class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans=0;
        unordered_map<long long,int>mp;
        for(auto iti:nums1)
            for(auto itj:nums2) mp[iti+itj]++;
        for(auto itk:nums3)
            for(auto itl:nums4) if(mp.find(-(itk+itl))!=mp.end()) ans+=mp[-(itk+itl)];
        return ans;
    }
};