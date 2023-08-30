class Solution {
public:
    int edgeScore(vector<int>& edges) {
        map<int,long long>mp;
        for(int i=0;i<edges.size();i++) mp[i]=0;
        for(int i=0;i<edges.size();i++){
            mp[edges[i]]+=i;
        } 
        long long maxi=0;
        for(auto it:mp) maxi=max(maxi,it.second);
        for(auto it:mp){
            if(it.second==maxi) return it.first;
        }
        return -1;
    }
};