class Solution {
public:
    bool check(char c)
    {
        return (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
    }
    string reverseVowels(string s) {
        int l=0,h=s.length()-1;
        while(l<h)
        {
            if(!check(s[l])) l++;
            else if(!check(s[h])) h--;
            else swap(s[l++],s[h--]);
        }
        return s;
    }
};