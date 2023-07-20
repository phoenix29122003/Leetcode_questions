class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>lastseen(26,0);
        for(int i=0;i<s.length();i++) lastseen[s[i]-'a']=i;
        vector<bool>seen(26,false);
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            int curr=s[i]-'a';
            if(seen[curr]) continue;
            while(st.size() && st.top()>s[i] && i<lastseen[st.top()-'a'])
            {
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[curr]=true;
        }
        string ans="";
        while(st.size())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};