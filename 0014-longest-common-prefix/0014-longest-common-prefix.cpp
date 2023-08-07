class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0,k=0;
            while(j<pref.length() && k<strs[i].length() && pref[j]==strs[i][k]) j++,k++;
            pref=pref.substr(0,j);
        }
        return pref;
    }
};