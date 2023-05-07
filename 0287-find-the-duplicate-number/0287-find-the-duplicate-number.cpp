class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(),ans;
        for(int i=0;i<n;i++)
        {
            int idx=abs(nums[i]);
            if(nums[idx]<0) 
            {
                ans=abs(nums[i]);
                break;
            }
            nums[idx]=-nums[idx];
        }
        return ans;
    }
};