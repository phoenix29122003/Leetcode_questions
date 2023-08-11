class Solution {
public:
    void merge(vector<int>&nums,int l,int mid,int h){
        int left=mid-l+1;
        int right=h-mid;
        vector<int>leftarr(left),rightarr(right);
        for(auto i=0;i<left;i++) leftarr[i]=nums[l+i];
        for(auto j=0;j<right;j++) rightarr[j]=nums[mid+1+j];
        auto leftarridx=0,rightarridx=0;
        int indexOfMergedArray=l;
        while(leftarridx<left && rightarridx<right) {
            if(leftarr[leftarridx]<=rightarr[rightarridx]) {
                nums[indexOfMergedArray]=leftarr[leftarridx];
                leftarridx++;
            }
            else{
                nums[indexOfMergedArray]=rightarr[rightarridx];
                rightarridx++;
            }
            indexOfMergedArray++;
        }
        while(leftarridx<left){
            nums[indexOfMergedArray]=leftarr[leftarridx];
            leftarridx++;
            indexOfMergedArray++;
        }
        while(rightarridx<right){
            nums[indexOfMergedArray]=rightarr[rightarridx];
            rightarridx++;
            indexOfMergedArray++;
        }
    }
    void mergesort(vector<int>&nums,int l,int h){
        if(l>=h) return;
        int mid=(l+h)/2;
        mergesort(nums,l,mid);
        mergesort(nums,mid+1,h);
        merge(nums,l,mid,h);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};