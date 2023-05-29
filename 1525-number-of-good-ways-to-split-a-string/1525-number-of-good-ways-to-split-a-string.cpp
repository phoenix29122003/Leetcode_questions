class Solution {
public:
    bool goodSplit(vector<int>freqA,vector<int>freqB) {
        int a1=0,a2=0;
        for(int i=0;i<26;i++) 
        {
            if(freqA[i]) a1++;
            if(freqB[i]) a2++;
        }
        return a1 == a2;
    }
	
    int numSplits(string s) {
        vector<int> freqA(26,0),freqB(26,0);
        int ans=0;
        for(char ch:s) freqB[ch-'a']++;
        for(char ch:s) 
        {
            freqA[ch-'a']++;
            freqB[ch-'a']--;
            if(goodSplit(freqA, freqB)) ans++;
        }
        return ans;
    }
};