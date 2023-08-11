class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        ans.push_back(-1);
        int grt=0;
        for(int i=n-2;i>=0;i--){
            grt=max(grt,nums[i+1]);
            ans.push_back(grt);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};