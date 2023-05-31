class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>pref,ans;
        pref.push_back(arr[0]);
        for(int i=1;i<arr.size();i++) pref.push_back(pref[i-1]^arr[i]);
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i][0]==0) ans.push_back(pref[queries[i][1]]);
            else ans.push_back(pref[queries[i][0]-1]^pref[queries[i][1]]);
        }
        return ans;
    }
};