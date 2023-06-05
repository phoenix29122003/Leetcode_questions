class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int ans=0,sum=0,maxi=0;
        unordered_map<int,int>mp;
        for(int i=0;i<wall.size();i++)
        {
            sum=0;
            for(int j=0;j<wall[i].size()-1;j++)
            {
                sum+=wall[i][j];
                mp[sum]++;
            }
        }
        for(auto it:mp) maxi=max(maxi,it.second);
        return wall.size()-maxi;
    }
};