class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        bool res=next_permutation(s.begin(),s.end());
        size_t ans=stoll(s);
        return (!res||ans>INT_MAX)?-1:ans;
    }
};