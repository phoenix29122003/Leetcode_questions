class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i=0,j=nums.size()-1,ans=0;
        while(i<j)
        {
            ans=max(ans,min(nums[i],nums[j])*(j-i));
            if(nums[i]<=nums[j]) i++;
            else j--;
        }
        return ans;
    }
};