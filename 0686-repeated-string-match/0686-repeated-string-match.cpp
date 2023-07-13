class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s="";
        int cnt=0;
        while(s.length()<b.length()) s+=a,cnt++;
        if(s.find(b)!=string::npos) return cnt;
        s+=a,cnt++;
        if(s.find(b)!=string::npos) return cnt;
        return -1;
    }
};