class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> wichOnes;
        for(size_t i = 0; i < words.size(); ++i){
            for(size_t j = 0; j < words[i].size(); ++j){
                if(words[i][j] == x){
                    wichOnes.emplace_back(i);
                    break;
                }
            }
        }
        return wichOnes;
    }
};