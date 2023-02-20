class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0 || st.empty()) st.push(nums[i]);
            else
            {
                while(!st.empty() && st.top()>0 && st.top()<abs(nums[i])) st.pop();
                if(!st.empty() && st.top()==abs(nums[i])) st.pop();
                else
                {
                    if(st.empty() || st.top()<0) st.push(nums[i]);
                }
            }
        }
        while(!st.empty()) 
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};