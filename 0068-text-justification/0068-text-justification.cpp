class Solution {
public:
    string solve(string dum,int maxw,int check)
    {
        if(dum.length()==maxw) return dum;
        int cnt=0;
        for(int i=0;i<dum.size();i++) if(dum[i]==' ') cnt++;
        int spacetobeinserted=maxw-dum.size();
        if(cnt== 0 || check== 1)
        { 
            dum.insert(dum.length(),spacetobeinserted,' '); 
            return dum;
        }
        int spacequlizer=spacetobeinserted/cnt;
        int leftover=spacetobeinserted%cnt;
        for(int i=0;i<dum.length();i++)
        {
            if(dum[i]==' ' && (spacequlizer>0 || leftover>0))
            { 
                int cnt=spacequlizer+((leftover--)>0?1:0);
                dum.insert(i,cnt,' ');
                i+=cnt;
            }
        }
        return dum;
    }
    vector<string> fullJustify(vector<string>& word, int maxw) {
        vector<string>ans;
        string dum=word[0];
        for(int i=1;i<word.size();i++)
        {
            if(dum.length()+word[i].length()+1<=maxw) dum+=" "+word[i];
            else 
            {
                dum=solve(dum,maxw,0);
                ans.push_back(dum);
                dum=word[i];
            }
        }
        dum=solve(dum,maxw,1);
        ans.push_back(dum);
        return ans;
    }
};