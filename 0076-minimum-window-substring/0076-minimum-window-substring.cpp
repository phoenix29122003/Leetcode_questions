class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(auto c:t) mp[c]++; 
        int cnt=0,low=0,min_len=INT_MAX,min_start=0; 
        for(int high=0;high<s.length();high++) {
            if(mp[s[high]]>0) cnt++;
            mp[s[high]]--;
            if(cnt==t.length()) {
                while(low<high && mp[s[low]]<0) mp[s[low++]]++; 
                if(min_len>(high-low+1)){
                    min_start=low; 
                    min_len=high-low+1;
                }
            }
        }
        if(min_len==INT_MAX) return "";
        return s.substr(min_start, min_len);
    }
};