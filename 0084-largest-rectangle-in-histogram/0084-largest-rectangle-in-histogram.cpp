class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        int ans=0;
        for(int i=0;i<=n;i++)
        {
            int currh=i==n?0:heights[i];
            while(!st.empty() && currh<heights[st.top()])
            {
                int top=st.top();
                st.pop();
                int width=st.empty()?i:i-st.top()-1;
                ans=max(ans,heights[top]*width);
            }
            st.push(i);
        }
        return ans;
    }
};