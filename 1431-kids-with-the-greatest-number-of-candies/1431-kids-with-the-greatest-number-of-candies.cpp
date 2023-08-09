class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int ex) {
        int grt=nums[0];
        for(auto it:nums) grt=max(grt,it);
        vector<bool>ans;
        for(auto it:nums){
            if(it+ex>=grt) ans.push_back(true);
            else ans.push_back(false);
        } 
        return ans;
    }
};