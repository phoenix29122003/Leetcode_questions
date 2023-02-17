class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string res="";
        for(char c:s)
        {
            if(c=='(') st.push(res.length());
            else if(c==')')
            {
                int j=st.top();
                st.pop();
                reverse(res.begin()+j,res.end());
            }
            else res+=c;
        }
        return res;
    }
};