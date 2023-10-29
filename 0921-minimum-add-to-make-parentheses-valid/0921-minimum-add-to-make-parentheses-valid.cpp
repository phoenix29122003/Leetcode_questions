class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push('(');
            else{
                if(st.empty()) st.push(')');
                else if(st.size() && st.top()==')') st.push(')');
                else st.pop();
            }
        }
        return st.size();
    }
};