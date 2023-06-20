class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        long long a=0,b=0,ans=0;
        vector<int>dum;
        for(int i=0;i<arr.size();i++) dum.push_back(arr[i]);
        sort(dum.begin(),dum.end());
        for(int i=0;i<arr.size();i++)
        {
            a+=dum[i];
            b+=arr[i];
            if(a==b) ans++;
        }
        return ans;
    }
};