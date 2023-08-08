class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set;
        int ans=0,i=0,j=0,n=s.length();
        while(j<n){
            if(set.find(s[j])!=set.end()){
                while(set.find(s[j])!=set.end()){
                    set.erase(s[i]);
                    i++;
                }
            }
            set.insert(s[j]);
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};