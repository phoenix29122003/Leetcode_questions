class Solution {
public:
    int countValidWords(string sentence) {
        int count = 0;
		regex valid_word("[a-z]*([a-z]-[a-z])?[a-z]*[!,.]?");
		stringstream s(sentence);
		string word;
		while(getline(s, word, ' ')) {
			if(word != "" && regex_match(word, valid_word)){
				++count;
			} 
		}

		return count;
    }
};