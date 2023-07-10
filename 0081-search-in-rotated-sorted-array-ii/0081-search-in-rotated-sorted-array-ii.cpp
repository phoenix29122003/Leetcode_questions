class Solution {
public:
    bool search(vector<int>& nums, int target) { 
        int lo=0,hi=nums.size()-1,mid;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            if(nums[mid]==target) return true;
            if((nums[lo]==nums[mid]) && (nums[hi]==nums[mid]))
            {
                lo++;
                hi--;
            }
            else if(nums[lo]<=nums[mid])
            {
                if(nums[lo]<=target && target<=nums[mid]) hi=mid-1;
                else lo=mid+1;
            }
            else
            {
                if(nums[mid]<=target && target<=nums[hi]) lo=mid+1;
                else hi=mid-1;
            }
        }
        return false;
    }
};