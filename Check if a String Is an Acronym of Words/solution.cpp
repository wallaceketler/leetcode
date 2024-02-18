class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string word = "";
        for(size_t i = 0; i < words.size(); ++i){
            word += words[i][0];
        }
        if(word == s){ return true; }
        else{ return false; }
    }
};