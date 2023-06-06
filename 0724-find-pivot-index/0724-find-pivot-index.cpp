class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1;
        int rs=0;
        for(int i=0;i<nums.size();i++) rs+=nums[i];
        int ls=0;
        rs-=nums[0];
        if(rs==0) return 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            ls+=nums[i];
            rs-=nums[i+1];
            if(ls==rs) return i+1;
        }
        return ans;
    }
};