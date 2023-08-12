class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        map<int,vector<int>>mp;
        int m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) mp[i+j].push_back(mat[i][j]);
        for(auto it:mp){
            if(it.first%2==0) reverse(it.second.begin(),it.second.end());
            for(auto it2:it.second) ans.push_back(it2);
        }
        return ans;
    }
};