class Solution {
public:
    bool doesAliceWin(string s) {
        int vowel_cnt =0;
        for(auto it:s){
            if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u') vowel_cnt++;
        }
        if(vowel_cnt == 0) return false;
        return true;
    }
};