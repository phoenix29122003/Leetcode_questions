class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),ans=0,left=0,right=n-1;
        while(left<right){
            int water_stored=min(height[left],height[right])*(right-left);
            ans=max(ans,water_stored);
            if(height[left]<=height[right]) left++;
            else right--;
        }
        return ans;
    }
};