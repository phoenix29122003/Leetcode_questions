class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.length();
        stack<pair<char,int>>st;
        for(int i=0;i<n;i++){
            if(st.size() && st.top().first==s[i] && st.top().second==k-1) st.pop();
            else if(st.size() && st.top().first==s[i]){
                char ch=st.top().first;
                int freq=st.top().second;
                st.pop();
                st.push({ch,freq+1});
            }
            else st.push({s[i],1});
        }
        string ans="";
        while(st.size()){
            char ch=st.top().first;
            int freq=st.top().second;
            st.pop();
            while(freq--){
                ans+=ch;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};