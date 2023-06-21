class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int n=pushed.size();
        int i=0,j=0;
        while(i<n)
        {
            st.push(pushed[i++]);
            while(st.size() && st.top()==popped[j]) st.pop(),j++;
        }
        return st.empty();
    }
};