class Solution {
public:
    void replace(string &s,string from,string to)
    {
        size_t i=0;
        while((i=s.find(from,i))!=string::npos)
        {
            s.replace(i,from.length(),to);
            i+=to.length();
        }
        return;
    }
    string pushDominoes(string dominoes) {
        string s2=dominoes;
        while(true)
        {
            string s1=s2;
            if(s1.find("R.L")!=string::npos) replace(s1,"R.L","S");
            if(s1.find(".L")!=string::npos) replace(s1,".L","LL");
            if(s1.find("R.")!=string::npos) replace(s1,"R.","RR");
            if(s1==s2) break;
            s2=s1;
        }
        replace(s2,"S","R.L");
        return s2;
    }
};