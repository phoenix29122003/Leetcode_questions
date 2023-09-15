class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        vector<int>check(26,0);
        for(int i=0;i<s1.length();i++) check[s1[i]-'a']++;
        int n=s1.length();
        vector<int>vec(26,0);
        for(int i=0;i<n;i++) vec[s2[i]-'a']++;
        if(vec==check) return true;
        for(int i=n;i<s2.length();i++){
            vec[s2[i]-'a']++;
            vec[s2[i-n]-'a']--;
            if(vec==check) return true;
        }
        return false;
    }
};