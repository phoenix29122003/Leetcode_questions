class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>dum;
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j]) dum.push_back(nums1[i++]);
            else dum.push_back(nums2[j++]);
        }
        while(i<m) dum.push_back(nums1[i++]);
        while(j<n) dum.push_back(nums2[j++]);
        for(int i=0;i<dum.size();i++) nums1[i]=dum[i];
    }
};