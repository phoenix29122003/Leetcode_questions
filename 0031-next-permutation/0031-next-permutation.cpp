class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),idx=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i+1]>nums[i])
            {
                idx=i;
                break;
            }
        }
        for(int i=n-1;i>=idx && idx!=-1 ; i--)
        {
            if(nums[i]>nums[idx])
            {
                swap(nums[i],nums[idx]);
                break;
            }
        }
        reverse(nums.begin()+idx+1,nums.end());
    }
};
