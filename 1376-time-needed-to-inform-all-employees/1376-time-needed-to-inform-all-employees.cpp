class Solution {
public:
    int numOfMinutes(int m, int hid, vector<int>& man, vector<int>& time) {
        int ans=0;
        unordered_map<int,vector<int>>tree;
        for(int i=0;i<m;i++) tree[man[i]].push_back(i);
        queue<pair<int,int>>q;
        q.push({hid,0});
        while(q.size()){
            int n=q.size();
            while(n--){
                int node=q.front().first;
                int timetillnow=q.front().second;
                q.pop();
                int timetakentochild=timetillnow+time[node];
                ans=max(ans,timetakentochild);
                for(auto it:tree[node]) q.push({it,timetakentochild});
            }
        }
        return ans;
    }
};