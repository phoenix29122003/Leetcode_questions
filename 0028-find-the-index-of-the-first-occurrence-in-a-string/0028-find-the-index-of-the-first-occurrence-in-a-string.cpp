class Solution {
public:
    int strStr(string s2, string s1) {
        if(s2.find(s1)!=string::npos) return s2.find(s1);
        return -1;
    }
};