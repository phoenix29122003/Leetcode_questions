class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newinterval) {
        vector<vector<int>>ans;
        int i=0,n=intervals.size();
        while(i<n && newinterval[0]>intervals[i][1]) ans.push_back(intervals[i]),i++;
        while(i<n && newinterval[1]>=intervals[i][0])
        {
            newinterval[0]=min(intervals[i][0],newinterval[0]);
            newinterval[1]=max(intervals[i][1],newinterval[1]);
            i++;
        }
        ans.push_back(newinterval);
        while(i<n) 
        {
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};