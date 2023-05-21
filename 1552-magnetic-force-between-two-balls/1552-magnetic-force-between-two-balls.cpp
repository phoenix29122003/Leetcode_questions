class Solution {
public:
    bool ispossible(vector<int>& arr,int mid,int m)
    {
        int cnt=1;
        int curr=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-curr>=mid) 
            {
                cnt++;
                curr=arr[i];
                if(cnt==m) return true;
            }
        }
        return cnt>=m?true:false;
    }
    int maxDistance(vector<int>& arr, int m) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),s=0,e=arr[n-1],ans;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(ispossible(arr,mid,m))
            {
                ans=mid;
                s=mid+1;
            }
            else e=mid-1;
        }
        return ans;
    }
};