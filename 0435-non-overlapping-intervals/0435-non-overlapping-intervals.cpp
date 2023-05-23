class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return 0;
        sort(intervals.begin(),intervals.end(),comp);
        int ans=-1;
        vector<int>prev=intervals[0];
        for(vector<int> it:intervals)
        {
            if(prev[1]>it[0]) ans++;
            else prev=it;
        }
        return ans;
    }
};