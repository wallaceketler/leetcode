class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        int current = 0;
        for(size_t i = 0; i < sentences.size(); ++i){
            current = 0;
            for(size_t j = 0 ; j < sentences[i].size(); ++j){
                if(sentences[i][j] == ' '){
                    current++;
                }
            }
            if(max < current + 1){ max = current + 1; }
        }

        return max;
    }
};