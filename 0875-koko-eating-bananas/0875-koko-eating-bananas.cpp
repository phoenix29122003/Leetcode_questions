class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int limit) {
        long long l,h=nums[0],m;
        l=1;
        long long ans=0;
        for(auto it:nums) h=1000000000;
        while(l<=h){
            m=(l+h)/2;
            long long cnt=0;
            for(auto it:nums) cnt+=(it+m-1)/m; 
            if(cnt<=limit){
                ans=m;
                h=m-1;
            }
            else l=m+1;
        }
        return ans;
    }
};