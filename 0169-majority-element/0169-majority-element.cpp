class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=-1,cnt=0,n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                ans=nums[i];
            }
            else if(nums[i]==ans) cnt++;
            else if(nums[i]!=ans) cnt--;
        }
        
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(ans==nums[i]) c++;
        }
        if(c>nums.size()/2) return ans;
        else return -1;
    }
};