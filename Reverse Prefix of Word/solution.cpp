class Solution {
public:
    string reversePrefix(string word, char ch) {
        string newWord1, newWord2, newWord;
        int j = 0;
        for(size_t i = 0; i < word.size(); ++i){
            if(word[i] == ch){
                j = i;
                break;
            }
        }
        for(size_t i = j + 1; i < word.size(); ++i){
            newWord2.push_back(word[i]);
        }
        
        for(size_t i = j; i > 0; i--){
            newWord1.push_back(word[i]);
        }
        newWord1.push_back(word[0]);
        for(size_t i = 0; i < newWord1.size(); ++i){
            newWord.push_back(newWord1[i]);
        }
        for(size_t i = 0; i < newWord2.size(); ++i){
            newWord.push_back(newWord2[i]);
        }

        return newWord;
    }
};