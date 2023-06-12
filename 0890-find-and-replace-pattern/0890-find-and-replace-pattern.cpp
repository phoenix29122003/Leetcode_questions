class Solution {
public:
    bool pattern_match(string pat,string s)
    {
        unordered_map<char,char>mp;
        for(int i=0;i<pat.length();i++)
        {
            if(mp.find(pat[i])==mp.end()) mp[pat[i]]=s[i];
            else if(mp[pat[i]]!=s[i]) return false;
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            if(pattern_match(pattern,words[i]) && pattern_match(words[i],pattern)) ans.push_back(words[i]);
        }
        return ans;
    }
};