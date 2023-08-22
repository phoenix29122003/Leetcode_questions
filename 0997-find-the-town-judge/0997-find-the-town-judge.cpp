class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 && trust.size()==0) return 1;
        if(n>1 && trust.size()==0) return -1;
        unordered_map<int,int>mp,mp2;
        for(int i=0;i<trust.size();i++) mp[trust[i][1]]++,mp2[trust[i][0]]=trust[i][1];
        for(auto it:mp) if(it.second==n-1 && mp2.find(it.first)==mp2.end()) return it.first;
        return -1;
    }
};