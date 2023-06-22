class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') st.push(i);
            else if(s[i]==')')
            {
                int top=st.top();
                st.pop();
                reverse(s.begin()+top+1,s.begin()+i);
            }
        }
        for(auto it:s) if(it!='(' && it!=')') ans+=it;
        return ans;
    }
};