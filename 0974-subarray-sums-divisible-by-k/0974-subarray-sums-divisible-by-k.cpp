class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {       
        unordered_map<int,int>mp;
        int ans=0,curr=0;
        for(int i=0;i<nums.size();i++){
            curr+=nums[i];
            int rem=curr%k;
            if(rem<0) rem+=k;
            if(rem==0) ans++;
            if(mp.find(rem)!=mp.end()) ans+=mp[rem];
            mp[rem]++;
        }
        return ans;
    }
};