class WordDictionary {
public:
    unordered_set<string>set;
    WordDictionary() {}
    void addWord(string word) {
        set.insert(word);
    }
    bool search(string word) {
        if(set.find(word)!=set.end()) return true;
        int f=0;
        for(auto it:word){
            if(it=='.'){
                f=1;
                break;
            }
        }
        if(f==0) return false;
        int cnt=0,ind1,ind2;
        for(int i=0;i<word.length();i++){
            if(word[i]=='.' && cnt==0){
                ind1=i;
                cnt=1;
            }
            else if(word[i]=='.' && cnt==1){
                ind2=i;
                cnt=2;
                break;
            }
        }
        if(cnt==1){
            for(char c='a';c<='z';c++){
                char ch=word[ind1];
                word[ind1]=c;
                if(set.find(word)!=set.end()) return true;
                else word[ind1]=ch;
            }
        }
        if(cnt==2){
            for(char c='a';c<='z';c++){
                for(char c1='a';c1<='z';c1++){
                    char ch1=word[ind1];
                    char ch2=word[ind2];
                    word[ind1]=c;
                    word[ind2]=c1;
                    if(set.find(word)!=set.end()) return true;
                    else{
                        word[ind1]=ch1;
                        word[ind2]=ch2;
                    }
                }
            }
        }
        return false;
    }
};
