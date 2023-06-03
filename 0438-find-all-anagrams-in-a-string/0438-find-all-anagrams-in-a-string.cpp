class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>curr(26,0);
        vector<int>pcnt(26,0);
        for(int i=0;i<p.size();i++) pcnt[p[i]-'a']++;
        for(int i=0;i<s.size();i++)
        {
            curr[s[i]-'a']++;
            if(i>=p.size()) curr[s[i-p.size()]-'a']--;
            if(curr==pcnt) ans.push_back(i-p.size()+1);
        }
        return ans;
    }
};