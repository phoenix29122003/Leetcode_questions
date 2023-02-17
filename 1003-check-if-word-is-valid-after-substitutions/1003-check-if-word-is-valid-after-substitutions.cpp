class Solution {
public:
    bool isValid(string s) {
        vector<char>st;
        for(auto c:s)
        {
            if(c=='c')
            {
                int n=st.size();
                if(st.size()<2 || st[n-1]!='b' || st[n-2]!='a') return false;
                st.pop_back(),st.pop_back();
            }
            else st.push_back(c);
        }
        return st.size()==0;
    }
};