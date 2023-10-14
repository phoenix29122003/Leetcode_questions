class Solution {
public:
    int findMaxLength(vector<int>& A) {
        int n=A.size();
        unordered_map<int,int>mp;
        int sum=0,ans=0;
        for(int i=0;i<n;i++){
            if(A[i]==1) sum++;
            else if(A[i]==0) sum--;
            if(sum==0) ans=i+1;
            else if(mp.find(sum)!=mp.end()) ans=max(ans,i-mp[sum]);
            else mp[sum]=i;
        }
        return ans;
    }
};