class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n=nums.size();
        stack<pair<int,int>>st;
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(st.size() && st.top().first<=nums[i]) st.pop();
            if(st.size()) ans[i]=st.top().second-i;
            st.push({nums[i],i});
        }
        return ans;
    }
};