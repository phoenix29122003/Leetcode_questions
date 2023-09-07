class Solution {
public:
    static bool comp(vector<int>a,vector<int>b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int cnt=1,n=intervals.size();
        vector<int>prev=intervals[0];
        for(int i=1;i<n;i++){
            if(prev[1]<=intervals[i][0]){
                cnt++,prev=intervals[i];
            }
        }
        return n-cnt;
    }
};