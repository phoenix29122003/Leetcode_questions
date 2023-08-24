class Solution {
public:
    bool check(vector<int>&nums,int limit,int n){
        int cnt=1,curr=0;
        for(auto it:nums){
            curr+=it;
            if(curr>limit) cnt++,curr=it;
        }
        return cnt<=n;
    }
    int shipWithinDays(vector<int>& nums, int d) {
        int lo=INT_MIN,hi=0,ans;
        for(auto it:nums) lo=max(lo,it),hi+=it;
        while(lo<=hi){
            int mi=(lo+hi)/2;
            if(check(nums,mi,d)) ans=mi,hi=mi-1;
            else lo=mi+1;
        }
        return ans;
    }
};