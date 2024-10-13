class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum%k==0) ans++;
            int rem=sum%k;
            if(rem<0) rem+=k;
            if(mp.find((rem)%k)!=mp.end()) ans+=mp[(rem)%k];
            mp[rem%k]++;
        }
        return ans;
    }
};