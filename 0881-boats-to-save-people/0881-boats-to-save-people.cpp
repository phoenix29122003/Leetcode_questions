class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int ans=0,l=0,r=nums.size()-1;
        while(l<=r)
        {
            if(nums[l]+nums[r]>limit) ans++,r--;
            else ans++,l++,r--;
        }
        return ans;
    }
};