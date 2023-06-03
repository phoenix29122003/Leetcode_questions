class Solution {
public:
    bool solve(string s,int num)
    {
        string str;
        while(num)
        {
            if(num&1) str+='1';
            else str+='0';
            num>>=1;
        }
        reverse(str.begin(),str.end());
        return s.find(str)!=-1;
    }
    bool queryString(string s, int n) {
        for(int i=1;i<=n;i++)
        {
            if(!solve(s,i)) return false;
        }
        return true;
    }
};
