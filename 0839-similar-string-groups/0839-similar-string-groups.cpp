class Solution {
public:
    bool iscomp(string s,string t)
    {
        int cnt=0;
        for(int i=0;i<s.length();i++) 
            if(s[i]!=t[i]) cnt++;
        return cnt==0 || cnt==2;
    }
    void dfs(vector<string>&strs,int idx,vector<int>&visited,int n)
    {
        visited[idx]=true;
        for(int i=0;i<n;i++)
            if(!visited[i] && iscomp(strs[idx],strs[i])) dfs(strs,i,visited,n);
    }
    int numSimilarGroups(vector<string>& strs) {
        int ans=0,n=strs.size();
        vector<int>visited(n,0);
        for(int i=0;i<n;i++)
            if(!visited[i]) ans++,dfs(strs,i,visited,n);
        return ans;
    }
};