class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0,j=0,n=pushed.size();
        stack<int>st;
        while(i<n && j<n){
            st.push(pushed[i++]);
            while(st.size() && st.top()==popped[j]){
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};