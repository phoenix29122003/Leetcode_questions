class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<nums.size();i++)
        {
            while(st.size() && st.top()>nums[i] && nums.size()-i-1>=k-st.size()) st.pop();
            if(st.size()<k) st.push(nums[i]);
        }
        while(st.size())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};