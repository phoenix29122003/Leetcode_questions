class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0;
        unordered_set<char>set;
        while(j<s.size())
        {
            if(set.find(s[j])==set.end())
            {
                set.insert(s[j]);
                ans=max(ans,j-i+1);
                j++;
            }
            else
            {
                set.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};