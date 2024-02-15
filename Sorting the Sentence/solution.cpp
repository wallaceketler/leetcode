class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        string newString = "";
        words.emplace_back("");
        int wordsCont = 0;
        for(size_t i = 0; i < s.size(); ++i){
            words[wordsCont]+=s[i]; 
            if(s[i] == ' '){
                words.emplace_back("");
                wordsCont++;
            }
        }
        words.back() += ' ';
        wordsCont = 1;
        for(size_t i = 0; i < words.size(); ++i){
            if(words[i][words[i].size() - 2] - '0' == wordsCont){
                newString += words[i].substr(0, words[i].size() - 2);
                newString += ' ';
                wordsCont++;
                i = -1;
            }
        }
        newString = newString.substr(0, newString.size() - 1);
        return newString;
    }
};