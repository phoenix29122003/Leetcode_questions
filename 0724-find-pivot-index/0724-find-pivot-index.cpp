class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rs=accumulate(nums.begin(),nums.end(),0);
        int ls=0;
        for(int i=0;i<nums.size();i++)
        {
            rs-=nums[i];
            if(ls==rs) return i;
            ls+=nums[i];
        }
        return -1;
    }
};