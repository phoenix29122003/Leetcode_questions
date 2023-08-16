class Solution {
public:
    void solve(map<int,vector<int>>&mp,int room,vector<bool>&opened){
        if(opened[room]==false) return;
        for(auto it:mp[room]){
            if(opened[it]==false){
                opened[it]=true;
                solve(mp,it,opened);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>opened(n,false);
        opened[0]=true;
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
            for(int j=0;j<rooms[i].size();j++) mp[i].push_back(rooms[i][j]);
        for(auto it:mp){
            solve(mp,it.first,opened);
        }
        for(int i=0;i<n;i++) if(opened[i]==false) return false;
        return true;
    }
};