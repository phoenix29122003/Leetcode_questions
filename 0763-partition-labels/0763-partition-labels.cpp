class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++) mp[s[i]]=i;
        int maxi=0,prev=-1;
        for(int i=0;i<s.length();i++)
        {
            if(maxi<mp[s[i]]) maxi=max(maxi,mp[s[i]]);
            if(i==maxi)
            {
                ans.push_back(i-prev);
                prev=maxi;
            }
        }
        return ans;
    }
};