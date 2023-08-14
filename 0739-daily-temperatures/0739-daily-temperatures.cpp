class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(st.size() && nums[st.top()]<=nums[i]) st.pop();
            if(st.size()) ans[i]=st.top()-i;
            st.push(i);
        }
        return ans;
    }
};