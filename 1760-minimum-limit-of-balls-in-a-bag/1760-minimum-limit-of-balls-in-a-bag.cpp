class Solution {
public:
    bool check(vector<int>nums,int cutsize,int maxcut){
        int cutcnt=0;
        for(auto it:nums){
            if(it>cutsize) cutcnt+=(it-1)/cutsize;
        }
        return cutcnt<=maxcut;
    }
    int minimumSize(vector<int>& nums, int k) {
        int l=1,h=INT_MIN,ans;
        for(auto it:nums) h=max(h,it);
        while(l<=h){
            int m=(l+h)/2;
            if(check(nums,m,k)) ans=m,h=m-1;
            else l=m+1;
        }
        return ans;
    }
};