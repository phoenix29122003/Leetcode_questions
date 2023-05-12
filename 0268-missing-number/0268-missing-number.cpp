class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans;
        unordered_set<int>set;
        for(int i=0;i<nums.size();i++) set.insert(nums[i]);
        for(int i=0;i<=nums.size();i++) 
            if(set.find(i)==set.end()) 
            {
                ans=i;
                break;
            }
        return ans;
    }
};