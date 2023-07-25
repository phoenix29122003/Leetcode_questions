class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1,sum=0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        int left=0,right=0;
        for(int i=0;i<nums.size();i++)
        {
            right=sum-left-nums[i];
            if(left==right) return i;
            left+=nums[i];
        }
        return ans;
    }
};