class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single_digit = 0;
        int double_digit = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=10) double_digit+=nums[i];
            else single_digit+=nums[i];
        }
        return !(single_digit==double_digit);
    }
};