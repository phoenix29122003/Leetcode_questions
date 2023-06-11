class Solution {
public:
    int count(const vector<int>& nums, int bound) {
        int ans = 0, cnt = 0;
        for (int x : nums) {
            cnt = x <= bound ? cnt + 1 : 0;
            ans += cnt;
        }
        return ans;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums, right) - count(nums, left - 1);
    }
};