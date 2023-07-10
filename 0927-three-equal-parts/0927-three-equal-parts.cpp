class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        int n=arr.size();
        vector<int>ones;
        for(int i=0;i<n;i++) if(arr[i]) ones.push_back(i);
        int cnt=ones.size();
        if(cnt==0) return {0,n-1};
        if(cnt%3!=0) return {-1,-1};
        int a=ones[0],b=ones[cnt/3],c= ones[(cnt/3)*2] ;
        while(c<n && arr[a]==arr[b] && arr[b]==arr[c]) a++,b++,c++;
        if(c==n) return {a-1,b};
        else return {-1,-1};
    }
};