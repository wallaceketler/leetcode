class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int item = 0;
        int rule;
        if(ruleKey == "type" ){ rule = 0; }
        if(ruleKey == "color"){ rule = 1; }
        if(ruleKey == "name" ){ rule = 2; }
        for(size_t i = 0; i < items.size(); ++i){
            for(size_t j = 0; j < items[i].size(); ++j){
                if(j == rule && items[i][j] == ruleValue){
                    item++;
                    break;
                }
            }
        }
        return item;
    }
};