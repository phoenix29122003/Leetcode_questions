class Solution {
public:
    int leastInterval(vector<char>& task, int n) {
        if(n==0) return task.size();
        unordered_map<char,int>mp;
        for(auto it:task) mp[it]++;
        priority_queue<pair<int,char>>pq;
        for(auto it:mp) pq.push({it.second,it.first});
        int maxfreq=pq.top().first;
        int cnt=0,maxcnt=0;
        for(auto it:mp) if(it.second==maxfreq) cnt++,maxcnt++;;
        vector<int>ans(maxfreq+(maxfreq-1)*n+(cnt-1));
        cout<<ans.size()<<endl;
        int cnt2=0;
        for(auto it:mp) if(it.second!=maxfreq) cnt2+=it.second;
        int blankspace=ans.size()-maxfreq*maxcnt;
        cout<<blankspace<<endl;
        if(blankspace){
            if(cnt2<=blankspace) cnt2=0;
            else cnt2=cnt2-blankspace;
        } 
        return ans.size()+cnt2;
    }
};