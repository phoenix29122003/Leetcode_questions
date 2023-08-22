class Solution {
public:
    int longestOnes(vector<int>& s, int k) {
        int n=s.size(),i=0,j=0,zero=0,ans=0;
        while(j<n){
            if(s[j]==0) zero++;
            ans=max(ans,j-i);
            if(zero>k){
                while(zero>k){
                    if(s[i]==0) zero--;
                    i++;
                }
            }
            j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};