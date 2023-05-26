class Solution {
public:
    vector<vector<int>> memo;
    int dp(string &s1,string &s2,int i,int j)
    {
        int cost=0;
        if (memo[i][j]!=-1) return memo[i][j];
        if (i==s1.size() && j==s2.size()) cost=0; 
        else if(i==s1.size()) cost+=dp(s1,s2,i,j+1)+s2[j];
        else if(j==s2.size()) cost+=dp(s1,s2,i+1,j)+s1[i];
        else if(s1[i]==s2[j]) cost+=dp(s1,s2,i+1,j+1);
        else{
            long a=dp(s1,s2,i+1,j)+s1[i];
            long b=dp(s1,s2,i,j+1)+s2[j];
            cost+=min(a, b);
        }
        return memo[i][j] = cost;
    }
    
    int minimumDeleteSum(string s1, string s2) {
        memo.resize(s1.size()+1, vector<int>(s2.size()+1, -1));
        return dp(s1, s2, 0, 0);       
    }
};