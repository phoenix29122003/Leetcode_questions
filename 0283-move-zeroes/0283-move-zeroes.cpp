class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int span_of_zeroes=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) span_of_zeroes++;
            else if(span_of_zeroes>0) swap(nums[i],nums[i-span_of_zeroes]);
        }
    }
};