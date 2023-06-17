class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,j=nums.size()-1;
        long long int p=1;
        long long int ans=0;
        long long int mod=1000000007;
        for(i=0;i<nums.size();i++)
        {
            ans=(ans+p*nums[i]-p*nums[j--])%mod;
            p=(p*2)%mod;
        }
        return (int)ans;
    }
};