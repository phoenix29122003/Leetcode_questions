class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int xora=0,xorb=0;
        for(int i=0;i<arr1.size();i++) xora^=arr1[i];
        for(int i=0;i<arr2.size();i++) xorb^=arr2[i];
        return xora&xorb;
    }
};