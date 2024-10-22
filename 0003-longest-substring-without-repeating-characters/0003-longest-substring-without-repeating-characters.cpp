class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        unordered_set<char>set;
        int i=0,j=0,n=s.length();
        while(j<n){
            while(set.find(s[j])!=set.end()){
                set.erase(s[i++]);
            }
            set.insert(s[j]);
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};