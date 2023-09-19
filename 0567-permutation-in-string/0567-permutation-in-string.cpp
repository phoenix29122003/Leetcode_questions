class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.length(),n=s2.length();
        string match=s1;
        sort(match.begin(),match.end());
        for(int i=0;i<=n-m;i++){
            string str=s2.substr(i,m);
            sort(str.begin(),str.end());
            if(str==match) return true;
        }
        return false;
    }
};