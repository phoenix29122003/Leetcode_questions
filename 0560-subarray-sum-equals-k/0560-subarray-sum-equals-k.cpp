class Solution {
public:
    int subarraySum(vector<int>& nums, int target) {
        int ans=0,sum=0,n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==target) ans++;
            if(mp.find(sum-target)!=mp.end()) ans+=mp[sum-target];
            mp[sum]++;
            cout<<"sum: "<<sum<<endl;
            cout<<ans<<endl;
        }
        return ans;
    }
};