class Solution {
public:
    vector<int> decode(vector<int>& nums, int first) {
        vector<int>ans;
        ans.push_back(first);
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(first^nums[i]);
            first=ans.back();
        }
        return ans;
    }
};