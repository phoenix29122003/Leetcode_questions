class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,h=nums[0],m,ans;
        for(auto it:nums) h=max(h,it);
        while(l<=h){
            m=(l+h)/2;
            int cnt=0;
            for(auto it:nums) cnt+=(it+m-1)/m;
            if(cnt<=threshold){
                ans=m;
                h=m-1;
            }
            else l=m+1;
        }
        return ans;
    }
};