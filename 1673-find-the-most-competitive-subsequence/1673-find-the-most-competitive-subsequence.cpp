class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<nums.size();i++){
            if(st.empty() || st.top()<=nums[i]) st.push(nums[i]);
            else{
                while(st.size() && st.size()+(n-i)>k && st.top()>nums[i]) st.pop();
                st.push(nums[i]);
            }
            if(st.size()>k) st.pop();
        }
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};