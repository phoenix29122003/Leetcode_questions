class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=INT_MIN;
        int l=0,r=n-1;
        while(l<r)
        {
            ans=max(ans,(r-l)*min(height[l],height[r]));
            if(height[l]<=height[r]) l++;
            else r--;
        }
        return ans;
    }
};