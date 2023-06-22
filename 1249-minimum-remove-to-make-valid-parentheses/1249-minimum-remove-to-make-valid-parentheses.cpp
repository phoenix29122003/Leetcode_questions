class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') st.push(i);
            else if(s[i]==')')
            {
                if(st.size()) st.pop();
                else s[i]='*';
            }
        }
        while(st.size())
        {
            s[st.top()]='*';
            st.pop();
        }
        s.erase(remove(s.begin(),s.end(),'*'),s.end());
        return s;
    }
};