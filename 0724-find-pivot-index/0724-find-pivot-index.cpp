class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1;
        int rs=0;
        for(int i=0;i<nums.size();i++) rs+=nums[i];
        int ls=0;
        for(int i=0;i<nums.size();i++)
        {
            ls+=nums[i];
            if(ls==rs) return i;
            rs-=nums[i];
        }
        return ans;
    }
};