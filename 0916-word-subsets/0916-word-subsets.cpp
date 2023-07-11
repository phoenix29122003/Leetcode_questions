class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;
        vector<int>freq(26,0);
        for(auto x:words2)
        {
            vector<int>temp(26,0);
            for(auto xx:x) 
            {
                temp[xx-'a']++;
                freq[xx-'a']=max(freq[xx-'a'],temp[xx-'a']);
            }
        }
        for(auto it:words1)
        {
            vector<int>matchfreq(26,0);
            for(auto itt:it) matchfreq[itt-'a']++;
            bool flag=true;
            for(int i=0;i<26;i++) 
            {
                if(freq[i]>matchfreq[i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag) ans.push_back(it);
        }
        return ans;
    }
};