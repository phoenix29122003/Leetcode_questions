class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& nums) {
        long long  ans=0,n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) nums[i]=nums[i]%60;;
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" "<<endl;
            if(mp.find(((60-nums[i])%60))!=mp.end()) ans+=mp[(60-nums[i])%60];
            mp[nums[i]]++;
        }
        return ans;
    }
};