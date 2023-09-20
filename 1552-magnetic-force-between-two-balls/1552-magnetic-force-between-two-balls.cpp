class Solution {
public:
    bool ispossible(vector<int>&nums,int n,int diff){
        int cnt=1,i=0,j=1;
        while(j<nums.size()){
            if(nums[j]-nums[i]>=diff){
                cnt++;
                i=j;
            }
            j++;
        }
        return cnt>=n;
    }
    int maxDistance(vector<int>& nums, int m) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),ans;
        int l=0,h=nums[n-1]-nums[0];
        while(l<=h){
            int mid=(l+h)/2;
            if(ispossible(nums,m,mid)){
                ans=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        return ans;
    }
};