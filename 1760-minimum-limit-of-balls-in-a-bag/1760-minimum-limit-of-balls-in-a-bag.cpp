class Solution {
public:
    bool solve(vector<int>&nums,int n,int mid,int op){
        int opr=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=mid) continue;
            opr+=(nums[i]-1)/mid;
        }
        return opr<=op;
    }
    int minimumSize(vector<int>& nums, int op) {
        int ans=-1,i=1,j=nums[0],n=nums.size();
        for(int i=0;i<n;i++) j=max(j,nums[i]);
        while(i<=j){
            int mid=(i+j)/2;
            if(solve(nums,n,mid,op)){
                ans=mid;
                j=mid-1;
            }
            else i=mid+1;
        }
        return ans;
    }
};