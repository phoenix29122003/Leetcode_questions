class Solution {
public:
    string shiftingLetters(string s, vector<int>& nums) {
        int shifts=0,n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            shifts=(shifts+nums[i])%26;
            s[i]=(s[i]-'a'+shifts)%26+'a';
        }
        return s;
    }
};