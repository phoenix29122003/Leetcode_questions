class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<pair<int,int>>st;
        int n=nums.size();
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            while(st.size() && st.top().first<=nums[i]) st.pop();
            if(st.empty()) ans.push_back(0);
            if(st.size()) ans.push_back(st.top().second-i);
            st.push({nums[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};