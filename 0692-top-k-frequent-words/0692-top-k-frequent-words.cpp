class Solution {
public:
    static bool comp(const pair<string,int> &a,const pair<string,int> &b)
    {
        if(a.second==b.second) return a.first<b.first;
        return a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& vec, int k) {
        vector<string>ans;
        unordered_map<string,int>mp;
        for(int i=0;i<vec.size();i++) mp[vec[i]]++;
        vector<pair<string,int>>vecpair;
        for(auto it:mp) vecpair.push_back({it.first,it.second});
        sort(vecpair.begin(),vecpair.end(),comp);
        for(auto it:vecpair){
            if(k==0) break;
            ans.push_back(it.first); 
            k--;
        }
        return ans;
    }
};