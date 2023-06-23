class Solution {
public:
    bool isValid(string s) {
        vector<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='c')
            {
                int n=st.size();
                if(n<2 || st[n-1]!='b' || st[n-2]!='a') return false;
                st.pop_back(),st.pop_back();
            }
            else st.push_back(s[i]);
        }
        return st.empty();
    }
};