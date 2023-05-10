class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0;
        unordered_set<char>set;
        while(j<s.length())
        {
            if(set.find(s[j])==set.end())
            {
                set.insert(s[j++]);
                ans=max(ans,j-i);
            }
            else 
            {
                while(set.find(s[j])!=set.end())
                {
                    set.erase(s[i++]);
                }
            }
        }
        return ans;
    }
};