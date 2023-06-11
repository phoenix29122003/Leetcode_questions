class Solution {
public:
    int getgreatereleind(string s,int i)
    {
        int idx=i;
        for(int j=i;j<s.length();j++)
        {
            if(s[j]>=s[idx]) idx=j;
        }
        return idx;
    }
    int maximumSwap(int num) {
        string s=to_string(num);
        string s1=s;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            int idx=getgreatereleind(s,i);
            swap(s[i],s[idx]);
            if(s!=s1) break;
        }
        int ans=stoi(s);
        return ans;
    }
};