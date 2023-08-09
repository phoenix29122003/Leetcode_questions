class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(char it:t) mp[it]++;
        for(char it:s) mp[it]--;
        char ans;
        for(auto it:mp) 
            if(it.second==1) ans=it.first;
        return ans;
    }
};