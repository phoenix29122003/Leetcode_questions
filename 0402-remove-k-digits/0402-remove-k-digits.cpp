class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()<=k) return "0";
        if(k==0) return num;
        string ans;
        stack<char>st;
        st.push(num[0]);
        for(int i=1;i<num.size();i++)
        {
            while(k>0 && !st.empty() && st.top()>num[i]) k--,st.pop();
            st.push(num[i]);
            if(st.size()==1 && num[i]=='0') st.pop();
        }
        while(k && !st.empty()) st.pop(),k--;
        while(!st.empty()) ans+=st.top(),st.pop();
        reverse(ans.begin(),ans.end());
        if(ans.size()==0) return "0";
        else return ans;
    }
};