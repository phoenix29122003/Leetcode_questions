class Solution {
public:
    vector<string> subdomainVisits(vector<string>& d) {
        int n=d.size();
        unordered_map<string,int>mp;
        vector<string>ans;
        for(int i=0; i<n; i++){
            int j=0;
            while(j<d[i].size() && d[i][j]!=' ') j++;
            int ct=stoi(d[i].substr(0,j));
            j++;
            mp[d[i].substr(j,d[i].size()-j)]+=ct;
            while(j<d[i].size() && d[i][j] != '.') j++;
            j++;
            if(j<d[i].size()) mp[d[i].substr(j,d[i].size()-j)]+=ct;
            while(j<d[i].size() && d[i][j] != '.') j++;
            j++;
            if(j<d[i].size()) mp[d[i].substr(j,d[i].size()-j)]+=ct;
        }
        for(auto it:mp) ans.push_back(to_string(it.second)+" "+it.first);
        return ans;
    }
};