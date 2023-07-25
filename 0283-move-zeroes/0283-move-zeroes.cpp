class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int span=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) span++;
            else if(span>0) swap(nums[i],nums[i-span]);
        }
    }
};