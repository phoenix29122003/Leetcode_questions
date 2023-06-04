class Solution {
public:
    int firstUniqChar(string s) {
        int ans=-1;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++) mp[s[i]]++;
        for(int i=0;i<s.length();i++)
            if(mp[s[i]]==1)
            {
                ans=i;
                break;
            }
        return ans;
    }
};