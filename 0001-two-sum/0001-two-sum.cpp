class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int remainder=target-nums[i];
            if(mp.find(remainder)!=mp.end()){
                return {i,mp[remainder]};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};